#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	char ch[1000] = { 0 };
//	int i = 0;
//	int az[40] = { 0 };
//	gets(ch);
//	for (i = 0; i < strlen(ch); i++)
//	{
//		if (ch[i] >= 'a'&&ch[i] <= 'z')
//		{
//			az[ch[i] - 'a']++;
//		}
//		if (ch[i] <= '9'&&ch[i >= '0'])
//		{
//			az[ch[i] - '0' + 26]++;
//		}
//	}
//	for (i = 0; i < 36; i++)
//	{
//		while (az[i] != 0)
//		{
//			if (i < 26)
//			{
//				printf("%c", i + 'a');
//			}
//			else
//			{
//				printf("%c", i-26+'0');
//			}
//			az[i]--;
//		}
//	}
//	system("pause");
//	return 0;

//int main()
//{
//	char ch1[] = "0";
//	char ch2[] = "0";
//	long long count = 0;
//	gets(ch1);
//	gets(ch2);
//	//for (long long i = 0; i < strlen(ch2); i++)
//	//{
//	//	for (long long j = i; j < strlen(ch1) - strlen(ch2) +1+i; j++)
//	//	{
//	//		if (ch2[i] != ch1[j])
//	//		{
//	//			count++;
//	//		}
//	//	}
//	//}
//	for (i = 0; i<lens; ++i)
//	{
//		if (i<lent)
//		{
//			if (t[i] == 'a')
//				numa++;
//			else
//				numb++;
//		}
//		if (s[i] == 'a')
//			total += numb;
//		else
//			total += numa;
//		if (i >= lens - lent)
//		{
//			if (t[pos++] == 'a')
//				numa--;
//			else
//				numb--;
//		}
//	}
//	printf("%lld\n", total);
//	return 0;
//}
//	printf("%lld", count);
//	system("pause");
//}
int main()
{
	char s[1000];
	char t[1000];
	scanf("%s%s", s, t);
	long long lens = strlen(s);
	long long lent = strlen(t);
	long long  numa, numb, total;
	int pos;
	numa = numb = total = pos = 0;

	int i, j;

	for (i = 0; i<lens; ++i)
	{
		if (i<lent)
		{
			if (t[i] == 'a')
				numa++;
			else
				numb++;
		}
		if (s[i] == 'a')
			total += numb;
		else
			total += numa;
		if (i >= lens - lent)
		{
			if (t[pos++] == 'a')
				numa--;
			else
				numb--;
		}
	}
	printf("%lld\n", total);
	system("pause");
	return 0;
}