/*Бинарного поиск*/

#include <header.h>

#define MAX_ELEM 10
int bin (int x, int *, int n);
 
  int main()
  {
	  int x = 30, i, test[MAX_ELEM];
	  
	  printf("test[]= ");
	  
	  for( i = 1; i < MAX_ELEM; ++i)
	  {
		  test[i] = MAX_ELEM*i;
		  printf("%d ", test[i]);
	  }
	  printf("\n");
	  if(bin(x, test, MAX_ELEM) == -1)
	  printf("Элемент:%d не найден\n", x);
	  else
	  printf("Позиция %d для test[]= %d\n", x, bin(x, test, MAX_ELEM));  
  }
  
  int bin(int x, int *v, int n)
  {
	  int low, high, mid;
	  
	  low = 0;
	  high = n -1;
	  while (low <= high)
	  {
		  mid = (low + high) / 2;
		  
		  if (x < v[mid])
		  high = mid - 1;
		  
		  else if (x > v[mid])
		  low = mid + 1;
		  
		  else return mid;
		  }
		  return -1;
  }

