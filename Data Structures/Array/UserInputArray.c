// Array
#include<stdio.h>
int main()
{
    // Initializing an array
    printf("Enter the size of an array: ");
    int siz;
    scanf("%d",&siz);
    int a[siz];

    //Assigning the values to an array
    for(int i=0;i<siz;i++)
    {
        printf("Enter the input for index %d",i);
        scanf("%d",&a[i]);
    }

    // Accessing the elemnet from an Array
    printf("Elements of an array are: ");
    for(int j=0;j<siz;j++)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}   