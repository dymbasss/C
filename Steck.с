// Стек фиксированного размера, построенный на массиве

#include "header.h"

	#define STACK_MAX_SIZE 20

	typedef size_t s_t;

	typedef struct Stack_tag // Структура стека
	{
		int data[STACK_MAX_SIZE];
		s_t size;
	}Stack1;

	
	void push(Stack1 *stack, const int value) // Кладем новый элемент в стек
	{
		if(stack->size >= STACK_MAX_SIZE)
		{
		exit(1);
		}
		
		stack->data[stack->size] = value;
		stack->size++;
	}

	int pop(Stack1 *stack) // Возвращает элемент с вершины стека и перехлдит к следующему
	{
		if (stack->size == 0)
		{
			exit(1);
		}
		stack->size--;
		return stack->data[stack->size];
	}

	int peek (const Stack1 *stack) // Возвращает текущий элемент с вершины
	{
		if(stack->size <= 0)
		{
			exit(1);
		}
	  	return stack->data[stack->size-1]; 
	}

	void stackvalue(const int value) //Вывод значения стека
	{
		printf("%d", value);
	}

	void printstack(const Stack1 *stack, void (*stackvalue)(const int)) //Печать стека -> его соджержимое через |
	{
		int i;
		int len = stack->size-1;
		printf("stack size %ld : ", stack->size);
		for (i=0; i < len; i++)
		{
			stackvalue(stack->data[i]);
			printf(" | ");
		}
		if (stack->size != 0)
		{
			stackvalue(stack->data[i]);
		}
		printf("\n");
	}

	int main()
		{
			Stack1 stack;
			stack.size = 0;
			push(&stack, 3);
			printstack(&stack, stackvalue);
			push(&stack, 5);
			printstack(&stack, stackvalue);
			push(&stack, 7);
			printstack(&stack, stackvalue);
			printf("%d\n", pop(&stack));
			printstack(&stack, stackvalue);
			printf("%d\n", pop(&stack));
			printstack(&stack, stackvalue);
			printf("%d\n", pop(&stack));
			printstack(&stack, stackvalue);
			getchar();	
		}

			//int main() // exit(1) 
			 //{
				//Stack1 stack;
				//stack.size = 0;
			 
				//push(&stack, 3);
				//pop(&stack);
				//pop(&stack);
				//getchar();
			//}
			
			//int main() // exit(1)
			 //{
				//Stack1 stack;
				//s_t i;
				//stack.size = 0;
			 
				//for (i = 0; i < 100; i++) {
					//push(&stack, i);
				//}
				//getchar();
			//}
