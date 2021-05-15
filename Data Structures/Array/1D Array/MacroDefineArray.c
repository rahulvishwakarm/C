#include<stdio.h>
#define N 8

int main()
{
    // Initializing array
    int arr[N];

    // Assignning values to element in array
    for(int i=0;i<N;i++)
    {
        printf("Enter the element at index %d",i);
        scanf("%d",&arr[i]);
    }

    // Printing the elment of an array
    printf("Elements in an array: ");
    for(int j=0;j<N;j++)
    {
        printf("%d\t",arr[j]);
    }
}