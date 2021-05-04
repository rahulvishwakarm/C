#include<stdio.h>

void add(int a,int b) {
    printf("%d\n", a+b);
}

void sub(int a, int b) {
    printf("%d\n", a-b);
}

void mul(int a,int b) {
    printf("%d\n", a*b);
}

void div(int a,int b) {
    printf("%d\n", a/b);
}

void mod(int a,int b) {
    printf("%d\n", a%b);
}

void incr(int a) {
    printf("%d\n", a++);
}

void desc(int b) {
    printf("%d\n", b--);
}

void main()
{
    int num1 = 23;
    int num2 = 21;
    add(num1,num2);
    sub(num1,num2);
    mul(num1,num2);
    div(num1,num2);
    incr(num1);
    desc(num2);
}