// Write the program to check whether any of the digits in a number apperars more than once
#include<stdio.h>
int main()
{
    int arr[] = {3,4,6,8,9,5,3,3};
    printf("Which number do you want to search in an array arr: ");
    int srch;
    scanf("%d",&srch);
    int count=0;
    int length = sizeof(arr)/sizeof(int);
    for(int i=0;i<length;i++)
    {
        if(arr[i]==srch)
        {
            count=count+1;
        }
    }
    printf("%d",srch);
    printf(" is repeated %d",count);
    printf(" times");
}