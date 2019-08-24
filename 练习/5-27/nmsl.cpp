#define _CRT_NONSTDC_NO_DEPRECATE 
#include<stdio.h>
#include <dos.h>
#include<stdlib.h>
#include<conio.h>
#include <process.h>
#define TRUE 1
#define FALSE 0
#define INVALID -1

#define total_instruction 320     /*  ָ������  */
#define total_vp 32             /*  ��ҳ�� */
#define clear_period 50          /*  ��������  */
typedef struct                  /*  ҳ��ṹ  */
{
	int pn, pfn, counter, time;
}p1_type;
p1_type  p1[total_vp];           /*  ҳ��ṹ����  */
struct pfc_struct                /*  ҳ����ƽṹ  */
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
	/* ����ÿ������ʱ���̺Ų�ͬ,�ʿ�������Ϊ��ʼ����������еġ����ӡ�  */
	S = (float)319 * rand() / 32767 + 1;
	for (i = 0; i<total_instruction; i += 4)      /*����ָ����� */
	{
		a[i] = S;                        /* ��ѡһָ����ʵ� */
		a[i + 1] = a[i] + 1;                  /* ˳��ִ��һ��ָ�� */
		a[i + 2] = (float)a[i] * rand() / 32767;   /* ִ��ǰ��ַָ��  */
		a[i + 3] = a[i + 2] + 1;                /* ִ�к��ַָ��  */
		S = (float)rand()*(318 - a[i + 2]) / 32767 + a[i + 2] + 2;
	}
	for (i = 0; i< total_instruction; i++)      /* ��ָ�����б任��ҳ��ַ��*/
	{
		page[i] = a[i] / 10;
		offset[i] = a[i] % 10;
	}
	for (i = 4; i <= 32; i++)           /* �û��ڴ湤������4��ҳ�浽32��ҳ�� */
	{
		printf("     �� %dҳ     \n", i);
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

		p1[i].pfn = INVALID;       /*��ҳ����ƽṹ�е�ҳ�ţ�ҳ��Ϊ��*/
		p1[i].counter = 0;         /*ҳ����ƽṹ�еķ��ʴ���Ϊ0*/
		p1[i].time = -1;           /*���ʵ�ʱ��*/
	}

	for (i = 0; i<total_pf - 1; i++)	/*����pfc[i-1]��pfc[i]֮�������*/
	{
		pfc[i].next = &pfc[i + 1];
		pfc[i].pfn = i;
	}

	pfc[total_pf - 1].next = NULL;

	pfc[total_pf - 1].pfn = total_pf - 1;

	freepf_head = &pfc[0];         /*��ҳ����е�ͷָ��Ϊpfc[0]*/

	return 0;
}


int FIFO(int total_pf)              /*�Ƚ��ȳ��㷨total_pf:�û����̵��ڴ�ҳ����*/
{
	int i, j;

	pfc_type *p;					/*�м����*/

	initialize(total_pf);         /*��ʼ�����ҳ����������ݽṹ*/

	busypf_head = busypf_tail = NULL; /*æҳ�����ͷ������β����*/

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)   /*ҳ��ʧЧ*/
		{
			diseffect += 1;                  /*ʧЧ����*/

			if (freepf_head == NULL)         /*�޿���ҳ��*/
			{

				p = busypf_head->next;

				p1[busypf_head->pn].pfn = INVALID;

				freepf_head = busypf_head;  /*�ͷ�æҳ����еĵ�һ��ҳ��*/

				freepf_head->next = NULL;  /*��������ȱҳ*/

				busypf_head = p;
			}

			p = freepf_head->next;

			freepf_head->pn = page[i];

			p1[page[i]].pfn = freepf_head->pfn;

			freepf_head->next = NULL; /*ʹbusy��βΪnull*/

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

int LRU(int total_pf)       /*������δʹ���㷨least recently used*/
{

	int min, minj, i, j, present_time; /*minjΪ��Сֵ�±�*/

	initialize(total_pf);

	present_time = 0;

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)             /*ҳ��ʧЧ*/
		{
			diseffect++;
			if (freepf_head == NULL)              /*�޿���ҳ��*/
			{
				min = 32767;						/*�������ֵ*/

				for (j = 0; j<total_vp; j++)            /*�ҳ�time����Сֵ*/
				{
					if (min>p1[j].time&&p1[j].pfn != INVALID)
					{
						min = p1[j].time;

						minj = j;
					}
				}

				freepf_head = &pfc[p1[minj].pfn];   //�ڳ�һ����Ԫ

				p1[minj].pfn = INVALID;

				p1[minj].time = 0;

				freepf_head->next = NULL;
			}

			p1[page[i]].pfn = freepf_head->pfn;   //�п���ҳ��,��Ϊ��Ч

			p1[page[i]].time = present_time;

			freepf_head = freepf_head->next;      //����һ��free ҳ��
		}
		else
		{
			p1[page[i]].time = present_time;        //���������Ӹõ�Ԫ�ķ��ʴ���
			present_time++;
		}
	}
	printf("LRU:%6.4f  ", 1 - (float)diseffect / 320);
	return 0;
}

int NUR(int  total_pf)                  /*���δʹ���㷨Not Used recently count��ʾ*/
{
	int i, j, dp, cont_flag, old_dp;

	pfc_type *t;

	initialize(total_pf);

	dp = 0;

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)         /*ҳ��ʧЧ*/
		{
			diseffect++;
			if (freepf_head == NULL)               /*�޿���ҳ��*/
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

int OPT(int total_pf)       /*����û��㷨*/
{
	int i, j, max, maxpage, d, dist[total_vp];

	pfc_type *t;

	initialize(total_pf);

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)      /*ҳ��ʧЧ*/
		{
			diseffect++;

			if (freepf_head == NULL)         /*�޿���ҳ��*/
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
/*���㷨ʱ������֪��Ԥ��δ֪�ģ�least frequency  Used�������ʹ���û���*/
int  LFU(int total_pf)
{
	int i, j, min, minpage;

	pfc_type *t;

	initialize(total_pf);

	for (i = 0; i<total_instruction; i++)
	{
		if (p1[page[i]].pfn == INVALID)      /*ҳ��ʧЧ*/
		{
			diseffect++;

			if (freepf_head == NULL)          /*�޿���ҳ��*/
			{
				min = 32767;
				/*��ȡcounter��ʹ����Ƶ����С���ڴ�*/
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

			p1[page[i]].pfn = freepf_head->pfn;   //�п���ҳ��,��Ϊ��Ч

			p1[page[i]].counter++;

			freepf_head = freepf_head->next;      //����һ��free ҳ��
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
