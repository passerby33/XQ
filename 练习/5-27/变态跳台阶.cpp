#include <iostream>
using namespace std;
int main()
{
	//int number = 0;
	//cin >> number;
	//	int x = 1, y = 1;
	//	int num = 1;
	//	if (number == 1)
	//	{
	//		cout << 1 << endl;
	//		system("pause");
	//		return 0;
	//	}
	//	int sum = 1;
	//	for (int i = 2; i<number; i++)
	//	{
	//		num = x + y;
	//		y = x;
	//		x = num;
	//		sum += x;
	//	}
	//	cout << sum + 1 << endl;	
	//	system("pause");
	//	return 0;
	double x = 0, y = 0;
	cin >> x >> y;
	if (x / y < 6.24)
	{
		cout << "Yes" << endl;

	}
	else{
		cout << "No" << endl;
	}
	system("pause");
	return 0;
}