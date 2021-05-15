/*
    Static Scoping

    Defination of the variable is resolved by searching in its inner block and then if it fails, 
    then searching in outer containing block
*/

#include<stdio.h>

int fun();
int a=10,b=20;

int main()
{
    fun();
}

int fun()
{
    int a = 5;
    {
        int c;
        c=b/a;
        printf("%d",c);
    }
}