#include <header.h>

  #define MAXLINE 1000 /* максимальный размер вводимой строки */

  int getl(char line[], int maxline);
  void copy(char *, char *);

  /* печать самой длинной строки */
  int main()
  {
      int len; /* длина текущей строки */
      int max; /* длина максимальной из просмотренных строк */
      char line[MAXLINE]; /* текущая строка */
      char longest[MAXLINE]; /* самая длинная строка */

      max = 0;
      while ((len = getl(line, MAXLINE)) > 0)
          if (len > max) {
              max = len;
              copy(longest, line);
          }
      if (max > 0) /* была ли хоть одна строка? */
          printf("%s", longest);
      return 0;
  }

  /* getline: читает строку в s, возвращает длину */
  int getl(char s[], int lim)
  {
      int c, i;

      for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
          s[i] = c;
      if (c == '\n') {
          s[i] = c;
          ++i;
      }
      s[i] = '\0';
      return i;
  }

  /* copy: копирует из 'from' в 'to'; to достаточно большой */
  void copy(char *to, char *from)
  {
      while ((*to++ = *from++) != '\0')
      ;
  
  }
