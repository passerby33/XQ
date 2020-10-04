//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h> 
//#include <string.h> 
//#include <ctype.h> 
//#include <stdlib.h> 
//typedef struct x2 
//{
//	char symbol[10];
//	int id;
//}symbolrecord;
//typedef struct x3 
//{
//	char idname[10];
//	int address;
//	int type;
//}entrytype;
//typedef struct x4 
//{
//	int num;
//	int address;
//}digittype;
//typedef struct x1 
//{
//	int id;
//	int entry;
//	char idname[10];
//}tokentype;
//FILE *fp;                       
//struct digittype d[10];         
//struct entrytype a[40];
//int k = 0, t = 0;
//struct symbolrecord s[26] =
//{ "Begin", 0,"End", 1,"If", 2,"Then", 3,"Else", 4,"for", 5,"do", 6,"while", 7,"+", 8,"-", 9,"*", 10,"/", 11,";", 12,"{", 13,
//"}", 14,"(", 15,")", 16,"<", 17,"<=", 18,"=", 19,"!=", 20,">", 21,">=", 22,":=", 23," ", 24,"const", 26
//};
//
//tokentype recogid(char ch)
//{
//	tokentype tokenid;
//	FILE *fs;
//	int flag, fflag;
//	char word[10] = { 0 };
//	int i, j;
//	i = 0;
//	while (isalpha(ch) || isdigit(ch))
//	{
//		word[i] = ch;
//		ch = fgetc(fp);
//		i = i + 1;
//	}
//	ungetc(ch, fp);
//	word[i] = '\0';
//	for (j = 0; j <= 8; j++)
//	{
//		flag = strcmp(word, s[j].symbol);
//		if (flag == 0)                                   
//		{
//			tokenid.id = j;
//			tokenid.entry = -1;
//			break;
//		}
//	}
//	if (flag != 0)
//	{
//		for (j = 0; j <= k; j++)
//		{
//			fflag = strcmp(a[j].idname, word);
//			if (fflag == 0) 
//			{
//				tokenid.id = 25;
//				tokenid.entry = a[j].address;
//				break;
//			}
//		}
//		if (fflag != 0)
//		{
//			fs = fopen("symbol.txt", "a"); 
//			strcpy(a[k].idname, word);
//			a[k].address = k;
//			a[k].type = 25;
//			tokenid.id = 25;
//			tokenid.entry = k;
//			for (j = 0; j<9; j++)
//				fprintf(fs, "%c", word[j]);
//			fprintf(fs, "%c", '\t');
//			fprintf(fs, "%d", a[k].address);
//			fprintf(fs, "%c", '\t');
//			fprintf(fs, "%d", a[k].type);
//			fprintf(fs, "%c", '\n');
//			fclose(fs);
//			k = k + 1;
//		}
//	}
//	strcpy(tokenid.idname, word);
//	return tokenid;
//}
//tokentype recogdig(char ch)
//{
//	int flag;
//	int i = 0, j;
//	int num = 0;
//	tokentype tokenid;
//	while (isdigit(ch))
//	{
//		num = (ch - 48) + num * 10;
//		ch = fgetc(fp);
//		i = i + 1;
//	}
//	for (j = 0; j <= t; j++)
//	if (d[j].num == num)
//	{
//		flag = 1;
//		tokenid.id = 26;
//		tokenid.entry = d[j].address;
//		break;
//	}
//	if (flag != 1)
//	{
//		d[t].num = num;
//		d[t].address = t;
//		tokenid.id = 26;
//		tokenid.entry = t;
//		t = t + 1;
//	}
//	sprintf(tokenid.idname, "%d", num);
//	return tokenid;
//}
//tokentype recogdel(char ch)
//{
//	tokentype tokenid;
//	switch (ch)
//	{
//	case'{':
//	{  tokenid.id = 13;
//	strcpy(tokenid.idname, "{");
//	case'}':
//	{   tokenid.id = 14;
//	strcpy(tokenid.idname, "}"); }break;
//	case';':
//	{  tokenid.id = 12;
//	strcpy(tokenid.idname, ";"); }break;
//	case'=':
//	{  tokenid.id = 19;
//	strcpy(tokenid.idname, "="); }break;
//	case':':ch = fgetc(fp);
//		if (ch == '=') tokenid.id = 23;   break;
//	case'!':
//	{ ch = fgetc(fp);
//	if (ch == '=') tokenid.id = 20;
//	strcpy(tokenid.idname, "!=");   }   break;
//	case'<':
//	{ch = fgetc(fp);
//	if (ch == '=')
//
//	{ tokenid.id = 18;
//	strcpy(tokenid.idname, "<=");
//	}
//	else
//	{
//		tokenid.id = 17;
//		strcpy(tokenid.idname, "<");
//		ungetc(ch, fp);
//	}};   break;
//	case'>':ch = fgetc(fp);
//		if (ch == '='){
//			tokenid.id = 22;
//			strcpy(tokenid.idname, ">=");
//		}
//		else {
//			tokenid.id = 21;
//			strcpy(tokenid.idname, ">");
//			ungetc(ch, fp);
//		};   break;
//	case'+':
//	{   tokenid.id = 8;
//	strcpy(tokenid.idname, "+");
//	}break;
//	case'*':
//	{ tokenid.id = 10;
//	strcpy(tokenid.idname, "*");
//	}break;
//
//	case'(':
//	{   tokenid.id = 15;
//	strcpy(tokenid.idname, "(");
//	}break;
//	case')':
//	{  tokenid.id = 16;
//	strcpy(tokenid.idname, ")");
//	}break;
//	}
//		tokenid.entry = -1;
//		return tokenid;
//	}
//
//tokentype handlecom(char ch);
//{
//		tokentype tokenid;
//		char ch1;
//		int flag = 0;
//		if (ch != '*')
//		{
//			tokenid.id = 25;
//			tokenid.entry = -1;
//		}
//		else
//		{
//			while (flag == 0)
//			{
//				ch1 = ch;
//				ch = fgetc(fp);
//				if ((ch1 = '*') && (ch = '/'))
//					flag = 1;
//			}
//		}
//		return tokenid;
//}
//void sort(char ch)
//	{
//		 tokentype tokenword;
//		FILE * fq = fopen("tokenfile.txt", "a");
//		if (isalpha(ch))
//			tokenword = recogid(ch);                
//		else if (isdigit(ch))
//			tokenword = recogdig(ch);            
//		else  if (ch == '/')
//			tokenword = handlecom(ch);
//		else
//			tokenword = recogdel(ch);
//		printf("%s\t%d\t%d\n", tokenword.idname, tokenword.id, tokenword.entry)
//			;
//		fprintf(fq, "%d", tokenword.id);
//		fprintf(fq, "%c", '\t');
//		fprintf(fq, "%d", tokenword.entry);
//		fprintf(fq, "%c", '\n');
//			fclose(fq);
//	}
//	void scanner()
//	{
//		char ch;
//		fp = fopen("source.txt", "r");
//		ch = getc(fp);
//		while (ch != EOF)
//		{
//			if (!isspace(ch))
//			{
//				sort(ch);
//			}
//			ch = fgetc(fp);
//		}
//		fclose(fp);
//	}
//	int main()
//	{
//		int i;
//		printf(" 输出 token 字如下 :\n");
//		printf("idname\ttype\taddress\n");
//		scanner();
//		printf("************************************\n");
//		printf(" 输出符号表如下： \n");
//		printf("%s\t%s\t%s\n", "idname", "address", "type");
//		for (i = 0; i <= k - 1; i++)
//			printf("%s\t%d\t%d\n", a[i].idname, a[i].address, a[i].type);
//		printf("************************************\n");
//
//			printf(" 输出常数表如下： \n");
//		printf("%s\t%s\n", "num", "address");
//		for (i = 0; i <= t - 1; i++)
//			printf("%d\t%d\n", d[i].num, d[i].address);
//		printf("\n\n");
//		system("pause");
//	}