#include<stdio.h>

void BITWISE(int a,int b) {
    printf("%d\n", ~a); //complement
    printf("%d\n", a|b);
    printf("%d\n", a<<b);//shift left
    printf("%d\n", a>>b); //shift right
}


void main()
{
    int num1 = 23;
    int num2 = 21;
    BITWISE(num1,num2);
}