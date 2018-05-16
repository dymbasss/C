# -----------------
Q = @
G = gcc
R = rm
# -----------------
NAME = my
LIB_DIR = /home/fox/tests_program/Hello/library
# -----------------

.PHONY : all clean 

all: built run 

built:
	$(Q)$(G) main.c -L$(LIB_DIR) -lmy -lm -o main.out 

run:
	$(Q)./main.out

clean:
	@printf " clean\n"
	$(Q)$(R) -f *.o *.out