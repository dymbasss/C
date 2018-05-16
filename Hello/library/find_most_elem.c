// Find most element in array
#include "header.h"

int find_most_elem(int *arr, int size)
	{
		int count = 0;

		for(int i = 0; i <= size/2; i++)
			{
			for(int j = size; j >= size/2; j--)
				{
					if (arr[j] == arr[j-1] || arr[i] == arr[i+1] || arr[i] == arr[j])
					count += 2;
				}
				
			if(count > size/2)
			return arr[i];
			}
		return 0;
	}
