#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h> 
#include<string.h> 

char prog[80],token[8]; 
char ch; 
int syn,p,m=0,n,row=0,sum=0; 
char *rwtab[22]={"begin","if","else","then","while","do","for","switch","case", "until","break","goto","constant","return", "int","float","double","string","char","short","long","end"}; 

void scaner() {
	for (n = 0; n<8; n++) token[n] = NULL; ch = prog[p++]; while (ch == ' ') { ch = prog[p]; p++; }
	if ((ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')) // Êý×Ö&×ÖÄ¸×éºÏ
	{
		m = 0; while ((ch >= '0'&&ch <= '9') || (ch >= 'a'&&ch <= 'z') || (ch >= 'A'&&ch <= 'Z')) { token[m++] = ch; ch = prog[p++]; } token[m++] = '\0'; p--; syn = 23; for (n = 0; n<22; n++) if (strcmp(token, rwtab[n]) == 0) // ×Ö·û´®±È½Ï£¬ÅÐ¶ÏÊÇ·ñÎª¹Ø¼ü×Ö
		{
			syn = n + 1; // ³öÏÖ¹Ø¼ü×Ö£¬ÖÖ±ðÂë +1 
			break;
		}
	}
	else if ((ch >= '0' && ch <= '9')) // Êý×Ö×éºÏ
	{
		{
			sum = 0; while ((ch >= '0' && ch <= '9') || ch == '.') { sum = sum * 10 + ch - '0'; ch = prog[p++]; }
		} p--; syn = 24;
		
		if (sum>32767) // Êý¾Ý·¶Î§Ô½½ç
			syn = -1;
	}
	else switch (ch) {
	case'<': m = 0; token[m++] = ch; ch = prog[p++]; if (ch == '>') // ·ûºÅ£º <> 
	{
				 syn = 34; token[m++] = ch;
	}
			 else if (ch == '=') // ·ûºÅ£º <= 
			 {
				 syn = 35; token[m++] = ch;
			 }
			 else // ·ûºÅ£º < 
			 {
				 syn = 36; p--;
			 } break; case'>': m = 0; token[m++] = ch; ch = prog[p++];
			 if (ch == '=') // ·ûºÅ£º >= 
			 {
				 syn = 37; token[m++] = ch;
			 }
			 else // ·ûºÅ£º > 
			 {
				 syn = 38; p--;
			 } break; case':': m = 0;
			 
				 token[m++] = ch; ch = prog[p++]; if (ch == '=') // ·ûºÅ£º := 
			 {
				 syn = 31; token[m++] = ch;
			 }
				 else // ·ûºÅ£º : 
				 {
					 syn = 30; p--;
				 } break;
			 case'*': syn = 26; token[0] = ch; break; // ·ûºÅ£º * 
			 case'/': syn = 27; token[0] = ch; break; // ·ûºÅ£º / 
			 case'+': syn = 28; token[0] = ch; break; // ·ûºÅ£º + 
			 case'-': syn = 29; token[0] = ch; break; // ·ûºÅ£º - 
			 case'=': syn = 38; token[0] = ch; break; // ·ûºÅ£º = 
			 case';': syn = 39; token[0] = ch; break; // ·ûºÅ£º ; 
			 case'(': syn = 40; token[0] = ch; break; // ·ûºÅ£º ( 
			 case')': syn = 41; token[0] = ch; break; // ·ûºÅ£º ) 
			 case'#': syn = 00; token[0] = ch; break; // ·ûºÅ£º # 
			 case'\n': syn = -2; break; // »»ÐÐ²Ù×÷£¬ÐÞ¸ÄÐÐÊý
			 default: syn = -1; break; // ÎÞ·¨Ê¶±ð£¬±¨´í
	}
}
int main() {
	printf ( " ********************************" );
	printf(" 1. ANALYSIS OF STRING");
	printf(" 2. EXIT THE PROGEAM");
	printf(" ********************************"  );
	printf(" [ Please enter your choice ]:");
	scanf("%d", &choose); 
	if (choose == 1) 
	{
		p = 0; row = 1; 
		printf(" ---------------------------------------------------");
		printf(" [ Please input a string like 'begin ******* end#' ]:");
		do 
		{ cin.get(ch); 
		  prog[p++] = ch; 
		}
		while (ch != '#'); p = 0; 
		printf(" ---------------------------------------------------");
		printf(" [ The analysis process is as follows ]:");
		do { 
			scaner(); switch (syn) {

			case 24: printf ( "  syn  ,  sum " ) ; 
				break;
			case -1: printf ( " Error in row   row  " ) ; 
				break; 
			case -2: row = row++; 
				break; 
			default: printf ( "  syn   token  " ) ; 
				break;
			}
		} while (syn != 0); 
		printf(" [ Analysis of the end ]");
	}
}