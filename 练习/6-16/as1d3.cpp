#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	int sum = 0, max = 0;
	for (int j = 0; j<n; j++)
	{
		if (a[j]>0)
		{
			sum += a[j];
		}
		else
		{
			
			if (max<sum)
			{
				max = sum;
				sum = 0;
			}
		}
	}
	if (sum>max)
	{
		cout << sum;
	}
	else
	{
		cout << max << endl;
	}
	delete []a;
	system("pause");
	return 0;
}