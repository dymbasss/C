// Находим парные элементы в массиве
	#include "header.h"

	int fDup(int A[], int n)
	{
		int XOR = 0;

		for (int i = 0; i < n; i++)
			XOR ^= A[i];

		for (int i = 1; i <= n-1; i++)
			XOR ^= i;

		return XOR;
	}

	int main()
	{
		int arr[] = { 1, 3, 4, 4, 2 };
		int n = sizeof(arr) / sizeof(arr[0]);

		printf("%d", fDup(arr, n));

	}
