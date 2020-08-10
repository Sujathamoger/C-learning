#include<stdio.h>
#include<stdlib.h>

struct Stack {
	int top;
	unsigned capacity;
	int *array;
};

struct Stack* createStack(unsigned capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity = capacity;
	stack->top = -1;
	stack->array = (int *)malloc(stack->capacity * sizeof(int));
	return stack;
}

int isFull(struct Stack* stack)
{
	return stack->top == stack->capacity;
}

int isEmpty(struct Stack* stack)
{
	return stack->top == -1;
}

void push(struct Stack *stack,int item)
{
	if(isFull(stack))
		return;
	
	stack->array[++stack->top] = item;
			
	printf("%d pushed to stack\n",stack->array[stack->top]);
}

int pop(struct Stack* stack)
{
	if(isEmpty(stack))
		return 0;
	return stack->array[stack->top];
}
int main()
{
	struct Stack* stack = createStack(100);
	int n=0;
	
	push(stack, 10);
	push(stack, 20);
	push(stack, 30);
	
	n=pop(stack);
	printf("n=%d",n);
	
	return 0;
}
