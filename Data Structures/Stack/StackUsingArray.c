#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stack
{
    int top;
    int capacity;
    int *array;
};

struct Stack *StackCreation()
{
    struct Stack *S = malloc(sizeof(struct Stack));
    S->capacity = 5;
    S->top = -1;
    S->array = (int *)malloc(S->capacity*sizeof(int));
    return S;
}

int isFUll(struct Stack *S)
{
    return S->top==S->capacity-1;
}

int isEmpty(struct Stack *S)
{
    return S->capacity==-1;
}

void push(struct Stack *S,int data)
{
    if(isFUll(S))
    {
        printf("Stack is Full, Overflow!!");
    }
    else
    {
        S->array[++S->top] = data;
    }
}

void pop(struct Stack *S)
{
    if(isEmpty(S))
    {
        printf("Stack is Empty, Underflow!!");
    }
    else
    {
        printf("Popped Empty: %d\n",S->array[S->top]);
        S->top = S->top -1;
    }
}

void peek(struct Stack *S)
{
    if(isEmpty(S))
    {
        printf("Stack is Empty!!");
    }
    printf("%d",S->array[S->top]);
}

void display(struct Stack *S)
{
    printf("Elements: \n");
    for(int i=S->top;i>=0;i--)
    {
        printf("%d\n",S->array[i]);
    }
}

int main()
{
    struct Stack *S = StackCreation();
    push(S,10);
    push(S,20);
    push(S,30);
    display(S);
    pop(S);
    pop(S);
    display(S);
    return 0;
}