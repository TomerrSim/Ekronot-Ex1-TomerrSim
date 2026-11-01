#include "LinkedList.h"
#include <iostream>

Node* insertAtEnd(Node* head, int val)
{
	if (head == NULL)
	{
		head = new Node;
		head->val = val;
		head->next = NULL;
		
		return head;
	}

	Node* curr = head;
	
	while (curr != NULL)
	{
		curr = curr->next;
	}

	curr->val = val;
	curr->next = NULL;

	return head;
}

int deleteTop(Node** head)
{
	Node* temp = NULL;
	Node* curr = *head;
	int tempVal = 0;

	if (*head == NULL || head == NULL) return -1;

	if ((*head)->next == NULL)
	{
		tempVal = (*head)->val;
		delete* head;
		*head = NULL;

		return tempVal;
	}

	while (curr->next != NULL)
	{
		temp = curr;
		curr = curr->next;
	}

	tempVal = curr->val;
	delete temp->next;
	temp->next = NULL;

	return tempVal;
}

Node *deleteButtom(Node *head)
{
	if (head == NULL) return NULL;
	if (head->next == NULL)
	{
		delete head;
		return NULL;
	}
	Node* temp = head;
	head = head->next;
	
	delete temp;

	return head;
}

void deleteAll(Node* head)
{
	Node* curr = head;

	while (curr != NULL)
	{
		curr->next = deleteButtom(curr);
	}
}