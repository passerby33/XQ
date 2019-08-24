#define _CRT_NONSTDC_NO_DEPRECATE 
#include<stdio.h>
#include <dos.h>
#include<stdlib.h>
#include<conio.h>
#include <process.h>
#define TRUE 1
#define FALSE 0
#define INVALID -1

#define total_instruction 320     /*  指令流长  */
#define total_vp 32             /*  虚页长 */
#define clear_period 50          /*  清零周期  */
typedef struct                  /*  页面结构  */
{
	int pn, pfn, counter, time;
}p1_type;
p1_type  p1[total_vp];           /*  页面结构数组  */
struct pfc_struct                /*  页面控制结构  */
{
	int pn, pfn;
	struct pfc_struct *next;
};
typedef struct pfc_struct pfc_type;
pfc_type pfc[total_vp], *freepf_head, *busypf_head, *busypf_tail;
int diseffect, a[total_instruction];
int page[total_instruction], offset[total_instruction];
int initialize(int);
int FIFO(int);
int LRU(int);
int OPT(int);
int LFU(int);
int NUR(int);
int main()
{
	int S, i, j;
	srand(getpid() * 10);
	/* 由于每次运行时进程号不同,故可用来作为初始化随机数队列的”种子”  */
	S = (float)319 * rand() / 32767 + 1;
	for (i = 0; i<total_instruction; i += 4)      /*产生指令队列 */
	{
		a[i] = S;                        /* 任选一指令访问点 */
		a[i + 1] = a[i] + 1;                  /* 顺序执行一条指令 */
		a[i + 2] = (float)a[i] * rand() / 32767;   /* 执行前地址指令  */
		a[i + 3] = a[i + 2] + 1;                /* 执行后地址指令  */
		S = (float)rand()*(318 - a[i + 2]) / 32767 + a[i + 2] + 2;
	}
	for (i = 0; i< total_instruction; i++)      /* 将指令序列变换成页地址流*/
	{
		page[i] = a[i] / 10;
		offset[i] = a[i] % 10;
	}
	for (i = 4; i <= 32; i++)           /* 用户内存工作区从4个页面到32个页面 */
	{
		printf("     第 %d页     \n", i);
		FIFO(i);
		LRU(i);
		OPT(i);
		LFU(i);
		NUR(i);
		printf("\n");
	}
	system("pause");
}
int initialize(int total_pf)
{
	int i;
	diseffect = 0;
	for (i = 0; i<total_vp; i++)
	{

		p1[i].pfn = INVALID;       /*置页面控制结构中的页号，页面为空*/
		p1[i].counter = 0;         /*页面控制结构中的访问次数为0*/
		p1[i].time = -1;           /*访问的时间*/
	}

	for (i = 0; i<total_pf - 1; i++)	/*建立pfc[i-1]和pfc[i]之间的链接*/
	{
		pfc[i].next = &pfc[i + 1];
		pfc[i].pfn = i;
	}

	pfc[total_pf - 1].next = NULL;

	pfc[total_pf - 1].pfn = total_pf - 1;

	freepf_head = &pfc[0];         /*空页面队列的头指针为pfc[0]*/

	return 0;
}


int FIFO(int total_pf)              /*先进先出算法total_pf:用户进程的内存页面数*/
{
	int i, j;

	pfc_type *p;					/*中间变量*/

	initialize(total_pf);         /*初始化相关页面控制用数据结构*/

	busypf_head = busypf_tail = NULL; /*忙页面队列头，队列尾链接*/

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)   /*页面失效*/
		{
			diseffect += 1;                  /*失效次数*/

			if (freepf_head == NULL)         /*无空闲页面*/
			{

				p = busypf_head->next;

				p1[busypf_head->pn].pfn = INVALID;

				freepf_head = busypf_head;  /*释放忙页面队列的第一个页面*/

				freepf_head->next = NULL;  /*表明还是缺页*/

				busypf_head = p;
			}

			p = freepf_head->next;

			freepf_head->pn = page[i];

			p1[page[i]].pfn = freepf_head->pfn;

			freepf_head->next = NULL; /*使busy的尾为null*/

			if (busypf_tail == NULL)
			{
				busypf_tail = busypf_head = freepf_head;
			}
			else
			{
				busypf_tail->next = freepf_head;
				busypf_tail = freepf_head;
			}

			freepf_head = p;
		}
	}

	printf("FIFO:%6.4f  ", 1 - (float)diseffect / 320);
	return 0;
}

int LRU(int total_pf)       /*最近最久未使用算法least recently used*/
{

	int min, minj, i, j, present_time; /*minj为最小值下标*/

	initialize(total_pf);

	present_time = 0;

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)             /*页面失效*/
		{
			diseffect++;
			if (freepf_head == NULL)              /*无空闲页面*/
			{
				min = 32767;						/*设置最大值*/

				for (j = 0; j<total_vp; j++)            /*找出time的最小值*/
				{
					if (min>p1[j].time&&p1[j].pfn != INVALID)
					{
						min = p1[j].time;

						minj = j;
					}
				}

				freepf_head = &pfc[p1[minj].pfn];   //腾出一个单元

				p1[minj].pfn = INVALID;

				p1[minj].time = 0;

				freepf_head->next = NULL;
			}

			p1[page[i]].pfn = freepf_head->pfn;   //有空闲页面,改为有效

			p1[page[i]].time = present_time;

			freepf_head = freepf_head->next;      //减少一个free 页面
		}
		else
		{
			p1[page[i]].time = present_time;        //命中则增加该单元的访问次数
			present_time++;
		}
	}
	printf("LRU:%6.4f  ", 1 - (float)diseffect / 320);
	return 0;
}

int NUR(int  total_pf)                  /*最近未使用算法Not Used recently count表示*/
{
	int i, j, dp, cont_flag, old_dp;

	pfc_type *t;

	initialize(total_pf);

	dp = 0;

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)         /*页面失效*/
		{
			diseffect++;
			if (freepf_head == NULL)               /*无空闲页面*/
			{
				cont_flag = TRUE;

				old_dp = dp;

				while (cont_flag)
				{

					if (p1[dp].counter == 0 && p1[dp].pfn != INVALID)
						cont_flag = FALSE;
					else
					{
						dp++;
						if (dp == total_vp)
							dp = 0;
						if (dp == old_dp)
						for (j = 0; j<total_vp; j++)
							p1[j].counter = 0;
					}
				}
				freepf_head = &pfc[p1[dp].pfn];
				p1[dp].pfn = INVALID;
				freepf_head->next = NULL;
			}


			p1[page[i]].pfn = freepf_head->pfn;

			freepf_head->pn = page[i];

			freepf_head = freepf_head->next;
		}
		else
			p1[page[i]].counter = 1;

		if (i%clear_period == 0)
		for (j = 0; j<total_vp; j++)
			p1[j].counter = 0;
	}
	printf("NUR:%6.4f  ", 1 - (float)diseffect / 320);

	return 0;
}

int OPT(int total_pf)       /*最佳置换算法*/
{
	int i, j, max, maxpage, d, dist[total_vp];

	pfc_type *t;

	initialize(total_pf);

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)      /*页面失效*/
		{
			diseffect++;

			if (freepf_head == NULL)         /*无空闲页面*/
			{

				for (j = 0; j<total_vp; j++)
				{
					if (p1[j].pfn != INVALID)
						dist[j] = 32767;
					else
						dist[j] = 0;
				}
				for (j = 0; j<total_vp; j++)
				{
					if ((p1[j].pfn != INVALID) && (dist[j] == 32767))
					{
						dist[j] = j;
					}
				}
				max = 0;
				for (j = 0; j<total_vp; j++)
				if (max<dist[j])
				{
					max = dist[j];
					maxpage = j;
				}

				freepf_head = &pfc[p1[maxpage].pfn];
				freepf_head->next = NULL;
				p1[maxpage].pfn = INVALID;

			}

			p1[page[i]].pfn = freepf_head->pfn;

			freepf_head = freepf_head->next;

		}
	}
	printf("OPT:%6.4f  ", 1 - (float)diseffect / 320);

	return 0;
}
/*该算法时根据已知的预测未知的，least frequency  Used是最不经常使用置换法*/
int  LFU(int total_pf)
{
	int i, j, min, minpage;

	pfc_type *t;

	initialize(total_pf);

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)      /*页面失效*/
		{
			diseffect++;

			if (freepf_head == NULL)          /*无空闲页面*/
			{
				min = 32767;
				/*获取counter的使用用频率最小的内存*/
				for (j = 0; j<total_vp; j++)
				{
					if (min>p1[j].counter&&p1[j].pfn != INVALID)
					{
						min = p1[j].counter;
						minpage = j;
					}

				}

				freepf_head = &pfc[p1[minpage].pfn];

				p1[minpage].pfn = INVALID;

				p1[minpage].counter = 0;

				freepf_head->next = NULL;
			}

			p1[page[i]].pfn = freepf_head->pfn;   //有空闲页面,改为有效

			p1[page[i]].counter++;

			freepf_head = freepf_head->next;      //减少一个free 页面
		}
		else
		{
			p1[page[i]].counter;
			p1[page[i]].counter = p1[page[i]].counter + 1;
		}
	}
	printf("LFU:%6.4f  ", 1 - (float)diseffect / 320);

	return 0;
}
