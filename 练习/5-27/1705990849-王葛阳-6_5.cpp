#include <stdio.h>
#define max(a,b)    (((a) > (b)) ? (a) : (b))
int n, arr1[30][30], arr2[30][30], arr3[30], arr4[30], m;
void fun(int x, int s) 
{
	if (x > n) 
	{
		m = max(m, s);
		return;
	}
	if (s + arr4[n] - arr4[x - 1] < m)
		return;
	for (int i = 1; i <= n; i++)
	if (!arr3[i]) 
	{
		arr3[i] = 1;
		fun(x + 1, s + arr1[x][i] * arr2[i][x]);
		arr3[i] = 0;
	}
}
int main() 
{
	int i, j;
	FILE * p1, *p2;
	p1 = fopen("input.txt", "r");
	p2 = fopen("output.txt", "w");
	fscanf(p1,"%d", &n);
	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
			
		{
			fscanf(p1,"%d", &arr1[i][j]);
		}
	}
	for ( i = 1; i <= n; i++)
	{
		for ( j = 1; j <= n; j++)
			
		{
			fscanf(p1,"%d", &arr2[i][j]);
		}
	}
	for ( i = 1; i <= n; i++) 
	{
		for ( j = 1; j <= n; j++)
		{
			arr4[i] = max(arr4[i], arr1[i][j] * arr2[j][i]);
		}
		arr4[i] += arr4[i - 1];
	}
	fun(1, 0);
	fprintf(p2,"%d", m);
	return 0;
}
