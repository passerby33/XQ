#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct seqlist
{
	int *array;
	int capacity;
	int size;
}seqlist;
void insert(seqlist* seq, int index, int val)
{
	if (index<0 || index>seq->size)
	{
		printf("不合法下标\n");
		return;
	}
	if (seq->size >= seq->capacity)
	{
		int* newseq = (int*)malloc(sizeof(int) * seq->capacity * 2);
		for (int i = 0; i < seq->size; i++)
		{
			newseq[i] = seq->array[i];
		}
		free(seq->array);
		seq->array = newseq;
	}
	for (int i = seq->size; i>index; i--)
	{
		seq->array[i] = seq->array[i - 1];

	}
	seq->array[index] = val;
	seq->size++;
}
typedef struct node{
	int val;
	struct node*next;
}node;
//node* head;
//头插
node *pushfront(node*head, int val){
	node* p = (node*)malloc(sizeof(node));
	p->val = val;
	p->next = head;
	return p;
}
//尾插
node* pushback(node*head, int val){
	node* p = (node*)malloc(sizeof(node));
	p->val = val;
	p->next = NULL;
	if (head == NULL){
		return p;
	}
	else{
		node* last = getlast(head);
		last->next = p;
		return head;
	}
}
node* getlast(node*head){
	node *cur = head;
	while (cur->next != NULL){
		cur = cur->next;
	}
	return cur;
}
//头删
node*popfront(node* head)
{
	assert(head != NULL);
	node* second = head->next;
	free(head);
	return second;
}
//尾删
node* popback(node*head)
{
	assert(head != NULL);
	if (head->next == NULL){
		free(head);
		return NULL;
	}
	else{
		node* lastlast = getlast(head);
		free(lastlast->next);
		lastlast->next = NULL;
		return head;
	}
}
node* getlastlast(node* head)
{
	node* cur = head;
	while (cur->next->next != NULL){
		cur = cur->next;
	}
	return cur;
}

int main()
{
	system("pause");
	return 0;
}