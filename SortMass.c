//Сортировка двух массивов X[] Y[] в один X[] по возрастанию
#include "header.h"
#define SWAP(A, B) { int t = A; A = B; B = t; }

	void printarr(int Arr[], int n)
	{
		for (int i = 0; i < n; i++)
		printf("%d ",Arr[i]);
	}
	
	void sort(int Arr[], int n)
	{
		for(int i = 0; i < n; ++i)
		{
			for(int j = i; j < n-1; j++)
			{
				if(Arr[i] > Arr[j+1])
				SWAP(Arr[i], Arr[j+1]);
			
			}	
		}
	}
	
	void merge(int X[], int Y[], int m, int n)
	{
		int i = 0;
		while (i < m)
		{
			if (X[i] > Y[0])
			{
				SWAP(X[i], Y[0]);
				int first = Y[0];
				int k;
				for(k = 1; k < n && Y[k] < first; k++)
				Y[k-1] = Y[k];

				Y[k-1] = first;
			}
			i++;
		}

		sort(X,m);
		sort(Y,n);
		
		int k = 0;
		for(i = 0; i < m; i++)
			if(X[i] != 0)
			X[k++] = X[i];
		for(int j = 0; j < n; j++)
			if(Y[j] != 0)
			X[k++] = Y[j];
	}

	int main()
	{
		int X[] = { 0, 2, 0, 3, 0, 5, 6, 0, 0};
		int Y[] = { 1, 8, 9, 10, 15};

		int m = sizeof(X) / sizeof(X[0]);
		int n = sizeof(Y) / sizeof(Y[0]);
		
		merge(X,Y,m,n);
		printarr(X,m);
	}
