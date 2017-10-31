/* Пузырьковая сортировка*/

#include <header.h>

#define SWAP(A, B) { int t = A; A = B; B = t; }

void inputmas(int *, int n);
void sort(int *, int n);
void outputmas(int *, int n);

int main()
{
	int n;
	printf("Количество элементов:");
	scanf("%d", &n);
	int *a = (int*)malloc(sizeof(int));
	inputmas(a, n);
	sort(a, n);
	outputmas(a, n);
	
	return 0;
}

void inputmas(int *a, int n) // вводим массвив
{
	for(int i = 0; i < n; ++i)
	{
		printf("%d Элемент: ", i+1);
		scanf("%d", &a[i]);
	}
}

void sort(int *a, int n) // сортировка 
{
	for(int i = 0; i < n; ++i)
	{
	for(int j = 0; j < n-1; j++)
	{
	if(a[j] > a[j + 1])
	SWAP (a[j], a[j + 1]);
}
}
}

void outputmas(int *a, int n) // вывод отсартированного массива
{
	printf("Отсортированный массив: ");
	for(int i = 0; i < n; ++i)
	printf("%d ", a[i]);
}
