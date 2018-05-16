#ifndef _HEADER_H
#define _HEADER_H 

#include <assert.h>
#include <complex.h>
#include <ctype.h>
#include <errno.h>
#include <fenv.h> 
#include <float.h>
#include <inttypes.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <tgmath.h>
#include <time.h>
#include <wchar.h>
#include <wctype.h>

// Sorting array (Bubble).
int sort(int * /*array*/, int /*size*/);

// Double elemants in array.
int double_elem(int * /*array*/, int /*size*/);

// Find most element in array.
int find_most_elem(int * /*array*/, int /*size*/);

// Find day-year-month.
int day_of_year(int /*year*/, int /*month*/, int /*day*/);
int month_day(int /*year*/, int /*yearday*/, int * /*pmonth*/, int * /*pday*/);

#endif