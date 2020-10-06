//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int n;
//	int x = 1, y = 1;
//	int z;
//	while (scanf("%d", &n) != EOF)
//	{
//		z = 1;
//		x = 1, y = 1;
//		if (n == 1 && n == 2)
//		{
//			printf("%d\n", x);
//			
//		}
//		else{
//			for (int i = 0; i < n - 2; i++)
//			{
//				z = x + y;
//				x = y;
//				y = z;
//			}
//			printf("%d\n", z);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <iostream>
//using namespace std;
//bool fun(char* n1, char* n2)
//{
//	if (*n1 == '\0'&&*n2 == '\0'){
//		return true;
//	}
//	if (*n1 == '\0' || *n2 == '\0'){
//		return false;
//	}
//	if (*n1 == '?'){
//		return fun(n1 + 1, n2 + 1);
//	}
//	else if (*n1 == '*')
//	{
//		return fun(n1++, n2) || fun(n1++, n2++) || fun(n1, n2++);
//	}
//	else if (*n1 == *n2)
//	{
//		return fun(n1++, n2++);
//	}
//	return false;
//
//}
//int main()
//{
//	char n1[]="";
//	char n2[]="";
//	cin >> n1 >> n2;
//	if (fun(n1, n2))
//	{
//		cout << "true" << endl;
//	}
//	else
//	{
//		cout << "false" << endl;
//	}
//	return 0;
//}