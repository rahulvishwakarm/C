// Recursion is said to be Non Tailed Recursion if recursive call is not the last thong call by the function

#include<stdio.h>

int fun(int);
int fun(int n)
{
    if(n==0)
    {
        return 0;
    }
    fun(n-1);
    printf("%d",n);
}

int main()
{
    fun(3);
}