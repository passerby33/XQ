#include <iostream>
#include <string>
using namespace std;
#if 0
int fun(int m, int n)
{
	int temp = 1;
	while (temp)
	{
	   temp = m%n;
		m = n;
		n = temp;
	}
	return m;
}
int main()
{
	int m;
	int n;
	fun(105, 200);
	while (cin >> m >> n)
	{
		int *a = new int[m];
		for (int i = 0; i<m; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i<m; i++)
		{
			if (n >= a[i])
			{
				n += a[i];
			}
			else
			{
				n += fun(n, a[i]);
			}
		}
		cout << n << endl;
		delete[] a;
	}
	return 0;
}
#endif
int main()
{
	string a;
	int i;
	while (cin >> a)
	{
		int b[300] = { 0 };
		for (i = 0; i < a.size(); i++)
		{
			b[a[i]]++;
		}
		for (i = 0; i < a.size(); i++)
		{
			if (b[a[i]] == 1)
			{
				cout << a[i] << endl;
				break;
			}
		}
		if (i == a.size())
		{
			cout << -1 << endl;
		}
	}
}