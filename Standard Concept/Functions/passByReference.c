#include<stdio.h>

//Call by reference - In this we call and perform operation ion data and not no its value
//Defining function

// * indicate the address

void swap(int *a,int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int num1 = 42;
    int num2 = 26;
    printf("Before swap, value of a:%d\t",num1);
    printf("Before swap value of b:%d\n",num2);

    swap(&num1,&num2);  // & is use to pass the value as address
    printf("After swap, value of a:%d\t",num1);
    printf("After swap value of b:%d\n",num2);

}