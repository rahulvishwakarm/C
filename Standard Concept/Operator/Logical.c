#include<stdio.h>

void AND(int a,int b) {
    printf("%d\n", a && b);
}

void OR(int a, int b) {
    printf("%d\n", a || b);
}

void NOT(int b) {
    printf("%d\n", !b);
}

void main()
{
    int num1 = 23;
    int num2 = 21;
    AND(num1,num2);
    OR(num1,num2);
    NOT(num2);
}