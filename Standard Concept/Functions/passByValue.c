#include<stdio.h>

int swap(int a,int b) {
    printf("Before Swaping: %d\t",a);
    printf("Before Swaping: %d\n",b);
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After Swaping: %d\t",a);
    printf("After Swaping: %d\n",b);
}

int main()
{
    int num1 = 10;
    int num2 = 13;
    swap(num1,num2); //pass by value
}