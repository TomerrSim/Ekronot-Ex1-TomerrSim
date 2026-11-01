#include "Utils.h"
#include "Stack.h"
#include <iostream>

#define SIZE 10

/*
* Function reverses an array using a stack
* Input: The array, The size of the array
* Output: None
*/
void reverse(int* nums, unsigned int size)
{
	Stack *s = NULL;
	initStack(s);

	for (int i = 0; i < size; ++i)
	{
		push(s, nums[i]);
	}
	for (int i = 0; i < size; ++i)
	{
		nums[i] = pop(s);
	}
}

/*
* Function gets an array from the user and reverses it
* Input: None
* Output: The reversed array
*/
int* reverse10()
{
	int nums[SIZE];

	for (int i = 0; i < SIZE; ++i)
	{
		std::cin >> nums[i];
	}
	reverse(nums, SIZE);

	return nums;
}


