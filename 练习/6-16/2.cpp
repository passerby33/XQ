//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//#define M    1000 
//#define N    5 
//void dks(int arr[][N], int v0, int dis[], int pv[])
//{
//	int a[N];
//	int mindis, temp;
//	int i, j, u;
//	for (i = 0; i<N; i++)
//	{
//		dis[i] = arr[v0][i];
//		a[i] = 0;
//		if (dis[i] == M)
//			pv[i] = -1;
//		else
//			pv[i] = v0;
//	}
//	dis[v0] = 0;
//	a[v0] = 1; 
//	for (i = 1; i < N; i++)
//	{
//		mindis = M;
//		u = v0;
//		for (j = 0; j < N; j++) 
//		if (a[j] == 0 && dis[j]<mindis)
//		{
//			mindis = dis[j];
//			u = j;
//		} 
//		a[u] = 1;
//		for (j = 0; j<N; j++) 
//		if (a[j] == 0 && arr[u][j]<M)
//		{ 
//			temp = dis[u] + arr[u][j];
//			if (dis[j] >  temp)
//			{
//				dis[j] = temp;
//				pv[j] = u;
//			}
//		} 
//	} 
//}
//void print(int pv[], int v0, int vn)
//{
//	int temp = vn;
//	int i, j;
//	int tmp[N];
//	for (i = 0; i < N; i++)
//	{
//		tmp[i] = 0;
//	}
//	tmp[0] = vn + 1;
//	for (i = 0, j = 1; j < N; j++)
//	{
//		if (pv[temp] != -1 && temp != 0)
//		{
//			tmp[i] = pv[temp] + 1;
//			temp = pv[temp];
//			i++;
//		}
//		else break;
//	}
//
//	
//	for (i = N - 1; i >= 0; i--)
//	{
//		if (tmp[i] != 0)
//		{ 
//			printf("v%d", tmp[i]);
//			if (i) 
//				printf("-->");
//		}
//	}
//	printf("-->v%d", vn + 1);
//}
//int main()
//{
//	char *p1[N] = { "v1", "v2", "v3", "v4", "v5" };
//	int arr[N][N] = {
//		{ 0, 10, M, 30, 100 },
//		{ M, 0, 50, M, M },
//		{ M, M, 0, M, 10 },
//		{ M, M, 20, 0, 60 },
//		{ M, M, M, M, 0 },
//	};
//	int dis[N];
//	int pv[N];  
//	int i;
//	dks(arr, 0, dis, pv);
//	for (i = 0; i < N; i++)
//	{
//		printf("%s-->%s:%d\t", p1[0], p1[i], dis[i]);
//		print(pv, 0, i);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}