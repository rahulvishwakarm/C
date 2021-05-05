#include<stdio.h>

int getAverage(int arr[],int size);
int main()
{
    int balance[5] = {1000,2,3,17,50};
    int avg;

    avg = getAverage(balance,5);
    printf("Average value is: %f",avg);
    return 0;
}