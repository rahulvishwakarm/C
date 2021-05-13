// Recursion is said to be tail recursive if the recursive call is the last thing done by the function. There is no need to keep record of previous state.

#include<stdio.h>
void fun(int);

void fun(int n)
{
    if(n==0)
    {
        return;
    }
    else
    {
        printf("%d",n);
    }
    return fun(n-1);
}

int main()
{
    fun(3);
    return 0;
}