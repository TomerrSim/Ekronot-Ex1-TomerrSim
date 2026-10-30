#include "Utils.h"
#include <iostream>

void reverse(int* nums, unsigned int size)
{
	int* temp = new int[size];
	int dec = size - 1;
	for (int i = 0; i < size; ++i)
	{
		temp[i] = nums[dec--];
	}
	for (int i = 0; i < size; ++i)
	{
		nums[i] = temp[i];
	}
}

