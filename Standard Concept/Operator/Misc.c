#include<stdio.h>

void MISC(int a,int b) {
    printf("%d\n", sizeof(a)); //return 4 since integer
    printf("%d\n", &b); //retunrn the actual address of b
    printf("%d\n",a=5?a:b); //if true return a else return b
}


void main()
{
    int num1 = 23;
    int num2 = 21;
    MISC(num1,num2);
}