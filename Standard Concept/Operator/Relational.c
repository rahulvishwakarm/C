#include<stdio.h>

void relation(int a,int b) {
    printf("%d\n", a==b);
    printf("%d\n", a!=b);
    printf("%d\n", a<b);
    printf("%d\n", a>b);
    printf("%d\n", a<=b);
    printf("%d\n", a>=b);
}


void main()
{
    int num1 = 23;
    int num2 = 21;
    relation(num1,num2);
}