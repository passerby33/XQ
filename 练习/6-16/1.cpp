//#include  <stdio.h>
//#include  <stdlib.h>
//typedef struct 
//{
//	char word;
//	int weight, left, right, pint;
//	int *code;
//}hftree;
//void creatree(hftree *p, int n){
//	int k = 0;
//	int i, j;
//	for (k = 0; k < n - 1; k++){
//		for (i = 0; i < n + k&&p[i].pint != -1; i++);
//		for (j = i + 1; j < n + k&&p[j].pint != -1; j++);
//		for (int i = j; i < k + n; i++){
//			if (p[i].pint == -1){
//				if (p[i].weight < p[i].weight){
//					j = i;
//					i = i;
//				}
//				else if (p[i].weight < p[j].weight){
//					j = i;
//				}
//			}
//		}
//		p[n + k].weight = p[i].weight + p[j].weight;
//		p[n + k].left = i;
//		p[n + k].right = j;
//		p[n + k].pint = -1;
//		p[n + k].word = 'X';
//		p[i].pint = p[j].pint = n + k;
//	}
//}
//void code(hftree *p1, int n){            //¥¥Ω®π˛∑Ú¬¸±‡¬Î 
//	int c, pa;
//	int *p;
//	for (int i = 0; i<n; i++){
//		p1[i].code = p = (int*)malloc(n*sizeof(int));
//		p[0] = 0;                   
//		c = i;
//		while (p1[c].pint != -1){             
//			pa = p1[c].pint;
//			if (c == p1[pa].left){
//				p[++p[0]] = 0;
//			}
//			else{
//				p[++p[0]] = 1;
//			}
//			c = pa;               
//		}
//	}
//}
//void print(hftree *p, int n)
//{
//	for (int j = 0; j<n; j++)
//	{
//		printf("%cµƒ±‡¬Î «£∫", p[j].word);
//		for (int i = p[j].code[0]; i>0; i--)
//		{                       
//			printf("%d", p[j].code[i]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	hftree *p;
//	int n, w[4] = { 9, 3, 6, 4 };
//	char ch[4] = { 'A', 'B', 'C', 'D' };
//	printf(" ‰»Î(1~4)£∫");
//	scanf("%d", &n);
//	p = (hftree*)malloc((2 * n - 1)*sizeof(hftree));
//	for (int i = 0; i<n; i++){
//		p[i].word = ch[i];
//		p[i].weight = w[i];
//		p[i].left = p[i].right = p[i].pint = -1;
//	}
//	creatree(p, n);
//	code(p, n);
//	print(p, n);
//	free(p);
//	return 0;
//}
