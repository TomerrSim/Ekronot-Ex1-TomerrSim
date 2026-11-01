#include <iostream>
#include "Queue.h"
using namespace std;

void printQueue(Queue* q, int size);

int main(void)
{
	Queue *q;
	q = new Queue;
	
	initQueue(q, 5);
	
	printQueue(q, 5);
}
void printQueue(Queue *q, int size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cout << q->items[i] + " " << endl;
	}
}