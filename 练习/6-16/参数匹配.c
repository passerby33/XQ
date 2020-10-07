//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	char a[] = "";
//	int count = 0;
//	gets(a);
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == '"')
//		{
//			i++;
//			while (a[i] != '"')
//			{
//				i++;
//			}
//			i++;
//			count++;
//		}
//		if (a[i] == ' ')
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count+1 );
//	int flag = 1;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] == '"')
//		{
//			i++;
//			while (a[i] != '"')
//			{
//				printf("%c", a[i]);
//			}
//			printf("\n");
//			i++;
//			continue;
//		}
//		if (a[i] == ' ')
//		{
//			printf("\n");
//			continue;
//		}
//		printf("%c", a[i]);
//
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}