#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define max(a,b)    (((a) > (b)) ? (a) : (b))
//int n, arr1[22][22], arr2[22][22], arr3[22], arr4[22], m;
//void fun(int x, int s) 
//{
//	if (x > n) {
//		m = max(m, s);
//		return;
//	}
//	if (s + arr4[n] - arr4[x - 1] < m)
//		return;
//	for (int i = 1; i <= n; i++)
//	if (!arr3[i]) {
//		arr3[i] = 1;
//		fun(x + 1, s + arr1[x][i] * arr2[i][x]);
//		arr3[i] = 0;
//	}
//}
//int main() 
//{
//	int i, j;
//	scanf("%d", &n);
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1; j <= n; j++)
//			
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for ( i = 1; i <= n; i++)
//	{
//		for ( j = 1; j <= n; j++)
//			
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for ( i = 1; i <= n; i++) 
//	{
//		for ( j = 1; j <= n; j++)
//		{
//			arr4[i] = max(arr4[i], arr1[i][j] * arr2[j][i]);
//		}
//		arr4[i] += arr4[i - 1];
//	}
//	fun(1, 0);
//	printf("%d", m);
//	return 0;
//}
//#include <iostream>
//#include <algorithm>
//#define MAXL 401
//using namespace std;
//
//int dp[MAXL][MAXL], W, V, n, w, v, p;
//
//void ZeroOnePack(int v, int w, int p);
//
//int main()
//{
//	cin >> V >> W;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v >> w >> p;
//		ZeroOnePack(v, w, p);
//	}
//	cout << dp[V][W] << endl;
//	return 0;
//}
//
//void ZeroOnePack(int v, int w, int p)
//{
//	for (int i = V; i >= v; i--)
//	for (int j = W; j >= w; j--)
//		dp[i][j] = max(dp[i - v][j - w] + p, dp[i][j]);
//
//}
//int main()
//{
//	int v[N] = { 0, 8, 10, 6, 3, 7, 2 };//��ֵ
//	int w[N] = { 0, 4, 6, 2, 2, 5, 1 };//����
//	int k[N] = { 0, 2, 3, 1, 5, 7, 8 };//���
//
//	//int m[N][N];
//	int m[N];
//	int n = 6, c = 12;
//	//int k1 = 0;
//	memset(m, 0, sizeof(m));
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = c; j >=0; j--)
//		{
//			if (j >= w[i])
//				//m[j][i] = max(m[j][i], m[j - w[i]][i-v[i]] + v[i]);
//				m[j] = max(m[j], m[j - w[i]] + v[i]);
//		}
//	}
//	//cout << m[][] <<endl;
//	printf("%d", m[c]);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//#define max(a,b)    (((a) > (b)) ? (a) : (b))
//const int N = 15;
//
//
//
//int main()
//{
//	int m[N][N];
//	int v[N] = { 0, 8, 10, 6, 3, 7, 2 };//��ֵ
//	int w[N] = { 0, 4, 6, 2, 2, 5, 1 };//����
//	int k[N] = { 0, 2, 3, 1, 5, 7, 8 };//���
//	int n = 0, c = 0, k1 = 0;
//	scanf("%d%d%d", &n,&c,&k1);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d%d%d", &v[i], &w[i], &k[i]);
//	}
//	memset(m, 0, sizeof(m));
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = c; j >= 0; j--)
//		{
//			for (int l = k1; l >= 0;l--)
//			{
//				if (j >= w[i]&&l>=k[i])
//				m[j][l] = max(m[j][l], m[j - w[i]][l - k[i]] + v[i]);
//
//			}
//		}
//	}
//	printf("%d", m[c][k1]);
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//#include <memory.h>
//
//#define max(a,b)    (((a) > (b)) ? (a) : (b))
//#define  N 15
//
//
//
//int main()
//{
//	int m[N][N];
//
//	int n = 0, c = 0, k1 = 0;
//	int v[N];
//	int w[N];
//	int k[N];
//	scanf("%d%d%d", &n, &c, &k1);
//	for (int i = 1; i <= n; i++)
//	{
//		scanf("%d%d%d", &v[i], &w[i], &k[i]);
//	}
//	memset(m, 0, sizeof(m));
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = c; j >= 0; j--)
//		{
//			for (int l = k1; l >= 0; l--)
//			{
//				if (j >= w[i] && l >= k[i])
//					m[j][l] = max(m[j][l], m[j - w[i]][l - k[i]] + v[i]);
//
//			}
//		}
//	}
//	printf("%d", m[c][k1]);
//	system("pause");
//	return 0;
//}
#include <iostream>

using namespace std;

int c1, c2;         //�ֱ�������
int n;              //��װ������
int w[100];         //��װ������
int cw;             //c1��ǰ������
int bestw;          //c1��ǰ����������
int r;              //ʣ�༯װ������
int x[100];         //��ǰ��
int bestx[100];      //��ǰ���Ž�

void Backtrack(int i)
{
	if (i > n)
	{
		//��ǰ���������Ž⣬����֮
		if (cw > bestw)
		{
			for (int j = 1; j <= n; j++)
				bestx[j] = x[j];
			bestw = cw;
		}
		return;
	}

	//��������,����򲻷���
	r -= w[i];              //ʣ����������ȥ��w[i]
	if (cw + w[i] <= c1)     //�ɷ��룬�ҷ���
	{
		x[i] = 1;           //����
		cw += w[i];
		Backtrack(i + 1);

		cw -= w[i];
	}
	if (cw + r > bestw)      //ʣ������������Ȼ��ȥ��w[i],��Ϊw[i]������
	{
		x[i] = 0;
		Backtrack(i + 1);
	}

	r += w[i];              //����
}

int main()
{
	while ((cin >> c1 >> c2 >> n) && n)
	{
		cw = 0;             //ÿ��������ʼ��
		r = 0;
		bestw = 0;

		for (int i = 1; i <= n; i++)
		{
			cin >> w[i];
			r += w[i];
		}
		Backtrack(1);
		if (r - bestw <= c2)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	system("pause");
	return 0;

}
