//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define Max 10000
//typedef struct 
//{
//	char arr[100];
//	int arr1[100][100];
//	int k1, k2;
//}data;
//void creatree(data *p)
//{
//	printf("请输入顶点和边：\n");
//	scanf("%d%d", &p->k1, &p->k2);
//	printf("\n请输入顶点：\n");
//	getchar();
//	for (int i = 0; i < p->k1; i++)
//	{
//		scanf("%c", &p->arr[i]);
//	}
//	for (int i = 0; i < p->k1; i++)
//	{
//		for (int j = 0; j < p->k1; j++)
//		{
//			p->arr1[i][j] = Max;
//		}
//	}
//	for (int k = 0; k < p->k2; k++)
//	{
//		printf("请输入边（vi,vj）的下标，i，j和权值w:\n");
//		int i, j, w;
//		scanf("%d%d%d", &i, &j, &w);
//		p->arr1[i][j] = w;
//		p->arr1[j][i] = w;
//	}
//}
//
//void print(data p)
//{
//	int m[100];
//	int s[100];
//	s[0] = 0;
//	m[0] = 0;
//	for (int i = 1; i < p.k1; i++)
//	{
//		s[i] = p.arr1[0][i];
//		m[i] = 0;
//	}
//	for (int i = 1; i < p.k1; i++)
//	{
//		int min = Max;
//		int k = 0;
//		for (int j = 1; j < p.k1; j++)
//		{
//			
//			if (s[j] != 0 && s[j]<min)
//			{
//				min = s[j];
//				k = j;
//			}
//		}
//		s[k] = 0;
//		printf("(%d,%d)", m[k], k);
//		for (int j = 1; j < p.k1; j++)
//		{
//			if (s[j] != 0 && p.arr1[k][j] < s[j])
//			{
//				s[j] = p.arr1[k][j];
//				m[j] = k;
//			}
//		}
//	}
//
//}
//int main()
//{
//	data p;
//	creatree(&p);
//	print(p);
//	return 0;
//}
