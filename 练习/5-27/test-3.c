#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int a[10][10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				a[i][j] = 1;
//				printf("%d ", a[i][j]);
//			}
//			else
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//				printf("%d ", a[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2 && a != 3) || (b != 2 && a == 3) )
//						{
//							if ((b == 2 && e != 4) || (b != 2 && e == 4) )
//							{
//								if ((c == 1 && d != 2) || (c != 1 && d == 2) )
//								{
//									if ((c == 5 && d != 3) || (c != 5 && d == 3) )
//									{
//										if ((e == 4 && a != 1) || (e != 4 && a == 1) )
//										{
//											if (a*b*c*d*e == 120)
//											{
//												printf("a=%d,b=%d,c=%d,d=%d,e=%d\n", a, b, c, d, e);
//											}
//										}
//									}
//								}
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int dd = 0;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (i == 0)
//		{
//			a = 1; c = 1; d = 1; dd = 0;
//		}
//		if (i == 1)
//		{
//			a = 0; c = 0; d = 1; dd = 0;
//		}
//		if (i == 2)
//		{
//			a = 0; c = 1; d = 0; dd = 0;
//		}
//		if (i == 3)
//		{
//			a = 0; c = 1; d = 1; dd = 0;
//		}
//		if (a + b + c + d + dd == 1 && d == dd)
//		{
//			printf("%d %d %d %d", a, b, c, d);
//		}
//	}
//	system("pause");
//	return 0;
//}
//#include <stdio.h>  
//int main()
//{
//	int murder;
//	for (murder = 'A'; murder <= 'D'; murder++)
//	{
//		if (((murder != 'A') + (murder == 'C') + (murder == 'D') + (murder != 'D')) == 3)    //三真一假，在if语句的，括号里为真结果为1，要是假结果为0。因此if括号  后面若成立，必定为三真一假，即必定等于3.  
//		{
//			printf("murder is %c\n", murder);     //由于最终要输出凶手，为一个字符，%c可用输出字符  
//
//		}
//
//	}
//	system("pause");
//	return 0;
//}
