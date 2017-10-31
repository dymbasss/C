// Динамически растущий стек на массиве
#include "header.h"

	#define INT_SIZE 10
	#define MULT 2
	typedef size_t s_t;
	
	
	typedef struct St_tg
	{
		int *data;
		s_t size;
		s_t top;
		
	}Stack;

	Stack *createstack() // Создание стека
	{
		Stack *out = NULL;
		out = malloc(sizeof(Stack));

		if (out == NULL)
		{
			exit(1);
		}
		out->size = INT_SIZE;
		out->data = malloc(out->size * sizeof(int));

		if (out->data == NULL)
		{
			free(out);
			exit(1);
		}
		out->top = 0;
		return out;
	}

	void deletestack(Stack **stack) // Удаление стека
	{
		free((*stack)->data);
		free(*stack);
		*stack = NULL;
	}

	void resize(Stack *stack) // Изменение размера стека
	{
		stack->size *= MULT;
		stack->data = realloc(stack->data, stack->size * sizeof(int));

		if(stack->data == NULL)
		{
			exit(1); // Не удлаось выделить достаточно памяти
		}
	}

	void push(Stack *stack, int value)
	{
		if(stack->top >= stack->size)
		{
		 resize(stack);
		}
		stack->data[stack->top] = value;
		stack->top++;
	}

	int pop(Stack *stack)
	{
		if (stack->top == 0)
		{
		 exit(1);
		}
		stack->top--;
		return stack->data[stack->top];
	}

	int peek(Stack *stack)
	{
		if(stack->top <= 0)
		{
			exit(1);
		}

		return stack->data[stack->top-1];
	
	}
	
	void implode(Stack *stack) // Уменьшает массив до размера равного числу элементов в массиве
	{
		stack->size = stack->top;
		stack->data = realloc(stack->data, stack->size * sizeof(int));
	}
	
	int main() {
		int i;
		Stack *s = createstack();
	 
		for (i = 0; i < 300; i++) {
			push(s, i);
		}
		implode(s);
		for (i = 0; i < 300; i++) {
			printf("%d ", peek(s));
			printf("%d ", pop(s));
		}
	 
		deletestack(&s);
		getchar();
	}
	
