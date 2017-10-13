// Найти каких элементов в массиве больше всего (немного туповат)
	#include "header.h"

	int maj(int a[], int n)
	{
		int count = 0;
		for(int i = 0; i <= n/2; i++)
			{
				
			
			for(int j = n; j >= n/2; j--)
			{
				if (a[j] == a[j-1] || a[i] == a[i+1] || a[i] == a[j])
				count+=2;
			}
			
			if(count > n/2)
			return a[i];
		}
		
		return 0;
	}

	int main()
	{
		int arr[] = { 2,6,5,6,2,5,5,6,6,6,   5,2,2,3,2,2,5,2,8,2 };
		int n = sizeof(arr) / sizeof(arr[0]);
		printf("%d", maj(arr, n));

	}
