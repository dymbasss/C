
#include "header.h"


	int day_of_year(int year, int month, int day);
	int monthday(int year, int yearday, int *pmonth, int *pday);

	static char daytab[2][13] =  {
     {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
     {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
 };
	int main()
	{   
     int year = 2000, date = 60, month = 3, day = 1;
     int m, d;

     monthday(year, date, &m, &d);
     printf("%dth day in year %d -> month=%d, day=%d\n", 
                                             date, year, m, d);
     printf("month=%d, day=%d -> %dth day in year %d\n", 
                             month, day, day_of_year(year, month, day), year);


     return 0;
	}

		int day_of_year(int year, int month, int day)
	 {
		 int i, leap;
		 char *kek;
		
		 // Отсчет начнем с 1918 -- года перехода на грегорианский календарь
		 if (year < 1918 || month < 1 || month > 12 || day < 1)
			 return -1;

		 leap = (year % 4 == 0 && year % 100 !=0) || (year % 400 == 0);
		 kek = &daytab[leap][1];
		 for (i = 1; i < month; i++)
		 {
			 day += *kek;
		 }
		 return day;
	 }

	 /* month_day: определяет месяц и день по дню года */
	 int monthday(int year, int yearday, int *pmonth, int *pday)
	 {
		 int i, leap;
		 char *kek;

		 if (year < 1918 || yearday < 1 || yearday > 366)
			 return -1;

		 leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
		 kek = &daytab[leap][1];
		 for (i = 1; yearday > *kek; i++)
			 yearday -= *kek;
		 *pmonth = i;
		 *pday = yearday;

		 return 0;
	 }

	 
	 
