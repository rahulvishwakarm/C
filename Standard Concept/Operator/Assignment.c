#include<stdio.h>

void Assignment(int a,int b) {
    printf("%d\n", a=b);
    printf("%d\n", a+=b);
    printf("%d\n", a-=b);
    printf("%d\n", a*=b);
    printf("%d\n", a/=b);
    printf("%d\n", a%=b);
    printf("%d\n", a>>=b);
    printf("%d\n", a<<=b);
    printf("%d\n", a&=b);
    printf("%d\n", a^=b);
    printf("%d\n", a!=b);
}


void main()
{
    int num1 = 23;
    int num2 = 21;
    Assignment(num1,num2);
}