#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	cin >> a;
	int b = 0;
	cin >> b;
	int c = a + ((b - a) >> 1);
	cout << "ƽ������" << c <<endl;
	return 0;
}