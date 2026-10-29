#ifndef LLIST_H
#define LLIST_H

typedef struct Node
{
	int val;
	Node* next;
} Node;

Node *insertAtEnd(Node* head, int val);
int deleteTop(Node** head);
Node* deleteButtom(Node* head);
void deleteAll(Node* head);

#endif