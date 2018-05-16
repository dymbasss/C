# ar - собирет в архив (программа)
# с - заствляет создать библиотеку
# r - заменяет старые объектые файлы новыми версиями
# -L - ключ, который указывает каталог с библиотками 
# (-L. - библиотека находится в текущем каталоге)
# -l - ключ, который перечисляет используемые библиотеки
# (-lназвание_библиотеки без окончания .a)
# rm - удаление
# -----------------
Q = @
G = gcc
R = rm
AR = ar
RC = rc
CP = cp
# -----------------
NAME = my
SRC = bubble_sort.c double_elem.c find_most_elem.c day_years.c
LIB = lib$(NAME).a
OBJS = ${SRC:.c=.o}
# -----------------

.PHONY : all clean 

all: lib

lib: $(OBJS)
	$(Q)printf " creation of library is complete\n"
	$(Q)$(AR) $(RC) $(LIB) $(OBJS)

clean:
	$(Q)printf " clean\n"
	$(Q) $(R) -f *.o *.out
 

