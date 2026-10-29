#include "Stack.h"
#include <iostream>


void push(Stack* s, unsigned int element)
{
	insertAtEnd(s->buttom, element);
	s->top = element;
}
int pop(Stack* s)
{
	int temp = 0;
	Node* curr = s->buttom;
	int deleted = deleteTop(&s->buttom);

	while (curr != NULL && curr->next != NULL) curr = curr->next;

	s->top = curr->val;
	return deleted;
}
void initStack(Stack* s)
{
	s->top = 0;
	s->buttom = NULL;
}

void cleanStack(Stack* s)
{
	deleteAll(s->buttom);
}

bool isEmpty(Stack* s)
{
	return s->buttom == NULL;
}

bool isFull(Stack* s)
{
	return true;
}
