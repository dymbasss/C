// Двоичный поиск
	#include "header.h"
	
typedef size_t s_t;

typedef struct Result { s_t pos; int isFound; }Res;

struct Result makeResult(s_t pos, int isFound)
{
    struct Result r;
    r.pos = pos;
    r.isFound = isFound;
    return r;
}

/* Макросы, означающие «найдено в позиции i» и «не найдено, если нужно
 * вставить со сдвигом, то в позицию i».
 */
#define FOUND(i)    makeResult(i, 1)
#define NOTFOUND(i) makeResult(i, 0)

struct Result binarySearch(s_t n, int a[], int x)
{
    /* Номер первого элемента в массиве */
    s_t first = 0;
    /* Номер элемента в массиве, СЛЕДУЮЩЕГО ЗА последним */
    s_t last = n;

    /* Начальная проверка, которую, в принципе, можно опустить — но тогда см. ниже! */
    if (n == 0) {
        /* массив пуст */
        return NOTFOUND(0);
    } else if (a[0] > x) {
        /* искомый элемент меньше всех в массиве */
        return NOTFOUND(0);
    } else if (a[n - 1] < x) {
        /* искомый элемент больше всех в массиве */
        return NOTFOUND(n);
    }

    /* Если просматриваемый участок непустой, first < last */
    while (first < last) {
        size_t mid = first + (last - first) / 2;

        if (x <= a[mid])
            last = mid;
        else
            first = mid + 1;
    }

    /* Если условный оператор if (n == 0) и т.д. в начале опущен -
     * значит, тут раскомментировать!
     */
    if (/* last < n && */ a[last] == x) {
        /* Искомый элемент найден. last - искомый индекс */
        return FOUND(last);
    } else {
        /* Искомый элемент не найден. Но если вам вдруг надо его
         * вставить со сдвигом, то его место - last.
         */
        return NOTFOUND(last);
    }
}

int main()
{
    int a[] = { 1, 3, 5, 7, 9 };
    struct Result r = binarySearch(5, a, 12);
    /* Вторая подстановка соответствует соглашениям Windows; на Unix %zu */
    printf("%s at %zu\n", r.isFound ? "Found" : "Not found", r.pos);
    return 0;
}
