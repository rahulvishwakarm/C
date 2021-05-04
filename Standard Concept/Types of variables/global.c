#include<stdio.h>
int x=20;

void function1()
{
    printf("function 1: %d\n",x);
}

void function2()
{
    printf("function 2 : %d\n",x);
}

int main()
{
    function1();
    function2();
    return 0;
}