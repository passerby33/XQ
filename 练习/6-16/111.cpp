#include <iostream>
using namespace std;
int main()
{
	int n = 0;
	while (cin >> n&&n != 0)
	{
		unsigned long  int a = 1, b = 1;
		for (int i = 1; i <= n; i++){
			a *= 5;
			b *= 4;

		}
		a = a - 4;
		b = b + n - 4;
		cout << a << " " << b << endl;
	}
}