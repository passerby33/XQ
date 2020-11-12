//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int p[30]; 
//int L[30];  
//int arr[30];  
//int pl[30];  
//int fun(int n, int d)
//{
//	int count = 0;
//	int i;
//	int arr2[30];
//	int arr1[30];
//	memset(arr2, 0, sizeof(arr2));
//	memset(arr1, 0, sizeof(arr1));
//	for (i = 1; i <= L[0]; i++)
//	{
//		if (L[i] != 1) 
//		{
//			int k1 = p[L[i]];
//			int k2 = pl[L[i]];
//			if (arr2[k1]<1 && arr1[L[i]] + k2>d) 
//			{
//				arr2[k1] = 1;
//				k1 = p[k1];
//				count++;
//			}
//			else if (arr2[k1]<1 && arr1[k1] < arr1[L[i]] + k2) 
//				arr1[k1] = k2 + arr1[L[i]]; 
//			if (--arr[k1] == 0)   
//				L[++L[0]] = k1;
//		}
//	}
//	return count;
//}
//
//int main()
//{
//	int n, d;
//	FILE * p1, *p2;
//	p1 = fopen("input.txt", "r");
//	p2 = fopen("output.txt", "w");
//	fscanf(p1,"%d", &n);
//	int a, k2;
//	int i, j;
//	L[0] = 0;
//	for (i = 1; i <= n; i++)
//	{
//		fscanf(p1,"%d ", &arr[i]);
//		if(arr[i] == 0)   
//		{
//			L[++L[0]] = i;
//		}
//		else
//		for (j = 0; j<arr[i]; j++)
//		{
//			fscanf(p1,"%d %d", &a, &k2);
//			p[a] = i; 
//			pl[a] = k2;  
//		}
//	}
//	fscanf(p1,"%d", &d);
//	fprintf(p2,"%d", fun(n, d));
//	return 0;
//}