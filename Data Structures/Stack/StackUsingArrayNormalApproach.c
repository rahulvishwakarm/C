#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int a[MAX],top = -1;
void push();
void pop();
void display();
int main()
{
    int ch;
    printf("1. PUSH or Insert\n");
    printf("2. POP or delete\n");
    printf("3. Display\n");
    printf("4. End Program\n");

    while (1)
    {
        printf("\nEnter Choise:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                display();
                break;
            }
            case 4:
            {
                exit(0);
                break;
            }
            default:
            {
                printf("Wrong Choise!!!");
            }
        }
    }
}

void push()
{
    int data;
    if(top==MAX-1)
    {
        printf("Stack is full, Overflow!!");
    }
    else
    {
        printf("Enter the element to be Pushed: ");
        scanf("%d",&data);
        top++;
        a[top] = data;
    }
}

void pop()
{
    if(top==-1)
    {
        printf("Stack is Empty, Underflow!!");
    }
    else
    {
        printf("Popped Element: %d",a[top]);
        top--;
    }
}

void display()
{
    if(top>=0)
    {
        printf("Elements: ");
        for(int i=top;i>=0;i--)
        {
            printf("\n%d",a[i]);
        }
    }
    else
    {
        printf("Stack is empty!!");
    }
}