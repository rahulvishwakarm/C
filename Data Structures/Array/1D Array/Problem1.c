// Write the program to reverse the following given sequence in an array
// 34 56 54 32 67 89 90 32 21

#include<stdio.h>

int main()
{
    int arr[] = {34,56,54,32,67,89,90,32,21};
    int length = sizeof(arr)/sizeof(int);

    for(int i=0;i<length;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");

    for (int j = length-1; j >=0; j--)
    {
        printf("%d\t",arr[j]);
    }
    
}