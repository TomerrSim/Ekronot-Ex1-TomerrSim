#include "Queue.h"
#include <iostream>

#define ZRTH_DIF 1

using namespace std;



/*
*Function inserts an element at the end of the queue
*input: The pointer to the queue, the new value to enter
*output: None
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (isFull(q))
	{
		std::cout << "The Queue is Full!" << std::endl;
		return;
	}
	q->items[q->back] = newValue;
	q->back++;
}

/*
* Function removes an element from the queue
* Input: The Pointer to the queue
* Output: The element removed
*/
int dequeue(Queue* q)
{
	int temp = q->items[q->front];
	if (isEmpty(q))
	{
		std::cout << "The Queue is Empty!" << std::endl;
		return -1;
	}
	q->front++;

	if (isEmpty(q))
	{
		q->front = -1;
		q->back = -1;
	}

	return temp;
}


/*
*Function initializes the queue
* Input: The pointer to the queue, The size of the newly to be created queue
* Output: None
*/
void initQueue(Queue* q, unsigned int size)
{
	if (q == nullptr) return;
	q->front = -1;
	q->back = -1;
	q->size = size;
	q->items = new int[size];
}
/*
* Function cleans queue, frees all the memory
* Input: The pointer to the queue
* Output: None
*/
void cleanQueue(Queue* q)
{
	
	if (q == nullptr || q->items == nullptr) return;

	q->items = nullptr;
	q->size = 0;
	q->front = 0;
	q->back = 0;
	
}

/*
* Function checks if the queue given is full
* Input: The pointer to the queue
* Output: True(The queue is full)/False(The queue isnt full)
*/
bool isFull(Queue* s)
{
	return s->size == s->back + ZRTH_DIF;
}



/*
* Function checks if the queue is empty
* Input: The pointer to the queue
* Output: True(The queue is empty)/False(The queue isnt empty)
*/
bool isEmpty(Queue* s)
{
	return s->front == s->back;
}