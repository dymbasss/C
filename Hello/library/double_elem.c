//Find double elements in array
#include "header.h"

int double_elem(int *arr, int size)
	{
		int XOR = 0;

		for (int i = 0; i < size; i++)
			XOR ^= arr[i];

		for (int i = 1; i <= size-1; i++)
			XOR ^= i;

		return XOR;
	}