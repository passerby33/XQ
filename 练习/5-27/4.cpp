//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
//#define MAXCOST 30000
//typedef struct
//{
//	int u;
//	int v;
//	int w;
//}tree;
//void  mp(tree arr[], int e)
//{
//	tree temp;
//	int i, j, flag;
//	for (i = 0; i < e - 1; j++)
//	{
//		flag = 0;
//		for (j = 0; j<e - i - 1; j++)
//		if (arr[j].w>arr[j + 1].w)
//		{
//			temp = arr[j]; 
//			arr[j] = arr[j + 1]; 
//			arr[j + 1] = temp;
//			flag = 1;
//		}
//		if (flag == 0) break;
//	}
//}
//void kuskr(int m[][6], int n)
//{
//	int i, j, k1, k2, m1, m2, k;
//	int arr[30];
//	tree a[30];
//	k = 0;
//	for (i = 0; i < n; i++)
//	for (j = 0; j < n; j++)
//	if (i < j&&m[i][j] != MAXCOST)
//	{
//		a[k].u = i;
//		a[k].v = j;
//		a[k].w = m[i][j];
//		k++;
//	}
//	mp(a, k);
//	for (i = 0; i < n; i++)
//		arr[i] = i;
//	k = 1;
//	j = 0;
//	while (k < n)
//	{
//		k1 = a[j].u; k2 = a[j].v;
//		m1 = arr[k1];
//		m2 = arr[k2];
//		if (m1 != m2)
//		{
//			printf("tree:(%d,%d),Wight:%d\n", k1, k2, a[j].w);
//			k++;
//			for (i = 0; i < n; i++)
//			if (arr[i] == m2)
//				arr[i] = m1;
//		}
//		j++;
//	}
//}
//int main()
//{
//	int g[6][6] = { { 100, 6, 1, 5, 100, 100 },
//	                { 6, 100, 5, 100, 3, 100 },
//	                { 1, 5, 100, 5, 6, 4 },
//	                { 5, 100, 5, 100, 100, 2 },
//	                { 100, 3, 6, 100, 100, 6 },
//                    { 100, 100, 4, 2, 6, 100 }
//	};
//	kuskr(g, 6);
//	system("pause");
//	return 0;
//}