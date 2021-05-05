#include<stdio.h>

int main()
{
    for (int i = 0; i < 12; i++)
    {   
        if(i==7) {
            printf("Target found: %d\t",i);
            continue;
        }
        printf("Current Value is:%d\t",i);
    }
}