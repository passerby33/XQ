#include <iostream>
#include <cmath>
using namespace std;
int main()
{
#if 0
	long int n = 0;
	int count;
	while (cin >> n&&n != 0)
	{
		count = 0;
		while (n != 1 && n != 0)
		{
			if (n % 3 == 0)
			{
				n /= 3;
				count++;
			}
			else if (n % 3 == 1)
			{
				n += 2;
				n /= 3;
				count++;
			}
			else if (n % 3 == 2)
			{
				n += 1;
				n /= 3;
				count++;
			}
		}
		cout << count << endl;
	}
#endif
	int n = 0;
	int sum = 0;
	while (cin >> n&&n != 0)
	{
		sum = 0;
		for (int i = 2; i < sqrt(n); i++)
		{
			if (n%i == 0)
			{
				sum++;
				while (n%i != 0)
				{
					n /= i;
				}
			}
		}
		if (sqrt(n) < n)
		{
			sum++;
		}
		cout << sum << endl;
	}
	return 0;
}