// Сортировка бинарного массива
#include "header.h"

	
	void sort(int a[], int n)
	{
		int zer = 0;
		for(int i = 0; i < n; i++)
		if(a[i] == 0)
		zer++;

		int k = 0;
		while(zer--)
		a[k++] = 0;

		while(k < n)
		a[k++] = 1;
	
	}

	int main()
	{
		int a[] = {1,1,1,1,1,0,0,0,0};
		int n = sizeof(a)/sizeof(a[0]);

		sort(a,n);

		for(int i = 0; i < n; i++)
		printf("%d", a[i]);
	}
