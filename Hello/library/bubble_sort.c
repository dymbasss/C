// Sorting array (Bubble)
#include "header.h"

#define SWAP(A, B) { int t = A; A = B; B = t; }

int sort(int *arr, int size)
	{
		for(int i = 0; i < size; ++i)
		{
			for(int j = i; j < size-1; j++)
			{
				if(arr[i] > arr[j+1])
				SWAP(arr[i], arr[j+1]);
			}	
		}
		return 0;
	}