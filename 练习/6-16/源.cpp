//#include <iostream>
//using namespace std;
//int min(int a,int b)
//{
//	return a < b ? a : b;
//}
//int main(){
//	int N, f, l = 0, r = 0, f0 = 0, f1 = 1;
//	cin >> N;
//	while (1){
//		f = f0 + f1;
//		f0 = f1;
//		f1 = f;
//		//找到比N小且距离N最近的数，求出距离
//		if (f < N)
//			l = N - f;
//		else
//		{
//			//找到比N大且距离N最近的数，求出距离
//			r = f - N;
//			break;
//		}
//	}
//	//取最小距离
//	cout << min(l, r) << endl;
//	system("pause");
//	return 0;
//}
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int a = 1;
//	int b = 0;
//	printf("%d\n", a || b++);
//	printf("%d", b);
//	system("pause");
//	return 0;
//}