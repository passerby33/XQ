#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//typedef struct node{
//	char val;
//	struct node* left;
//	struct node* right;
//}node;
//void qianxu(node*root)
//{
//	if (root == NULL){
//		return;
//	}
//	printf("%c", root->val);//根
//	qianxu(root->left);
//	qianxu(root->right);
//}
//void zhongxu(node*root){
//	if (root == NULL){
//		return;
//	}
//	zhongxu(root->left);
//	printf("%c", root->val);
//	zhongxu(root->right);
//}
//void houxu(node*root){
//	if (root == NULL){
//		return;
//	}
//	houxu(root->left);
//	houxu(root->right);
//	printf("%c", root->val);
//}
//	
//int main()
//{
//	system("pause");
//	return 0;
//}
//int min1(int a, int b, int c){
//	int x = a < b ? a : b;
//	return x < c ? x : c;
//}
//int main()
//{
//	int n;
//	int count = 0;
//	int a[10] = { 0 };
//	int j = 1;
//	int x2 = 0, x3 = 0, x5 = 0;
//	a[0] = 1;
//	scanf("%d", &n);
//	while (n){
//		n = n & (n - 1);
//		count++;
//	}
//	printf("%d", count);
//	while (1){
//		int min2 = min1(a[x2] * 2, a[x3] * 3, a[5] * 5);
//		if (min2 == a[x2] * 2){
//			x2++;
//		}
//		if (min2 == a[x3] * 3){
//			x3++;
//		}
//		if (min2 == a[x5] * 5){
//			x5++;
//		}
//		a[j++] = min2;
//		if (j == n){
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}
//判断一个数是否是2^k；
//int main()
//{
//	int n = 0;
//	int count = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	if (count == 1){
//		printf("是\n");
//	}
//	else{
//		printf("no");
//	}
//	system("pause");
//	return 0;
//}