#include "Stack.h"
#include <iostream>
#include "LinkedList.h"

/*
* Function pushes an element to the stack
* Input: The pointer to the stack, The element to push on to the stack
* Output: None
*/
void push(Stack* s, unsigned int element)
{
	Node *temp = new Node;
	temp->val = element;
	temp->next = s->top;

	s->top = temp;
}

/*
* Function pops(removes) an element from the stack
* Input: The pointer to the stack
* Output: The element removed from the stack
*/
int pop(Stack* s)
{
	int x = 0;

	if (s->top == NULL)
	{
		std::cout << "The Stack is Empty!" << std::endl;
		return -1;
	}

	Node* temp = s->top;
	s->top = s->top->next;

	x = temp->val;	

	delete temp;
	return x;

}
/*
* Function initializes the stack
* Input: The pointer to the stack
* Output: None
*/
void initStack(Stack* &s)
{
	s = new Stack;
	s->top = NULL;
}

/*
* Function cleans the stack
* Input: The pointer to the stack
* Output: None
*/
void cleanStack(Stack* s)
{
	while (s->top != NULL) pop(s);
}

/*
* Function checks if the stack is empty
* Input: The pointer to the stack
* Output: True(The stack is empty)/False(The stack isnt empty)
*/
bool isEmpty(Stack* s)
{
	return s->top == NULL;
}

