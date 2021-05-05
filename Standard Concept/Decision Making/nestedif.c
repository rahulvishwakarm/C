#include<stdio.h>

int main()
{
    int tst = 53;
    if(tst<100)
    {
        printf("Number is less than 100\n");
        if(tst<50)
        {
            printf("Number is lesss than 50\n");
        }
        else {
            printf("Number is greater than 50\n");
            printf("NUmer is bertween 50 and 100\n");
        }
    }
}