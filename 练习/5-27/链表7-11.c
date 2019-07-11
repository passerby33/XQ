#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
typedef struct listnode{
	int val;
	struct listnode * next;
}listnode;
listnode* deleteDuplication(listnode* head){
	if (head == NULL)
	{
		return NULL;
	}
	listnode* prev = NULL;
	listnode* p1 = head;
	listnode* p2 = head->next;
	while (p2 != NULL){
		if (p1->val != p2->val){
			prev = p1;
			p1 = p2;
			p2 = p2->next;
		}
		else{
			while (p2 != NULL &&p1->val == p2->val){
				p2 = p2->next;
			}
			if (prev != NULL){
				prev->next = p2;
			}
			else{
				head = p2;
			}
			p1 = p2;
		}
		
		if (p2 != NULL){
			p2 = p2->next;
		}
	}
	return head;
}
typedef struct list{
	int val;
	struct list* next;
	struct list* random;
}list;
list* copylist(list*head)
{
	list* newhead = NULL;
	list* cur = head;
	list* last = NULL;
	while (cur != NULL){
		list* node = (list*)malloc(sizeof(list));
		node->val = cur->val;
		node->next = cur->next;
		cur->next = node;
		cur = node->next;
	}
	cur = head;
	while (cur != NULL){
		if (cur->random == NULL){
			cur->next->random = NULL;
		}
		else{
			cur->next->random = cur->random->next;
		}
		cur = cur->next->next;
	}
	cur = head;
	newhead = head->next;
	while (cur != NULL){
		list* node = cur->next;
		cur->next = node->next;
		if (node->next != NULL)
		{
			node->next = node->next->next;
		}
		cur = cur->next;
	}
	return newhead;
}
//Í·²å
listnode* bushfront(listnode*head)
{
	listnode* p = (listnode*)malloc(sizeof(listnode));
	p->val = 1;
	p->next = head;
	return p;
}
listnode* getlast(listnode* head){
	listnode* cur = head;
	while (cur->next != NULL){
		cur = cur->next;
	}
	return cur;
}
//Î²²å
listnode* bushback(listnode*head)
{
	listnode* node = (listnode*)malloc(sizeof(listnode));
	node->val = 1;
	node->next = NULL;
	if (head == NULL){
		return node;
	}
	else{
		listnode* last = getlast(head);
		last->next = node;
	}
	return head;
}
//Í·É¾
listnode* popfront(listnode* head){
	assert(head != NULL);
	listnode* second = head->next;
	free(head);
	return second;
}
//Î²É¾
listnode*getlastlast(listnode*head){
	listnode* node = head;
	while (node->next->next != NULL){
		node = node->next;
	}
	return node;
}
listnode* popback(listnode* head){
	assert(head != NULL);
	if (head->next == NULL){
		free(head);
		return NULL;
	}
	else
	{
		listnode* lastlast = getlastlast(head);
		free(lastlast->next);
		lastlast->next = NULL;
	}
	return head;
}
int main()
{
	system("pause");
	return 0;
}