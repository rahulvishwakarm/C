// raelloc() funtion is used to change the size of memory block without losing old data
// Syntax

/*

void *realloc(void *ptr, size_t newSize)
where
    ptr = Pointer to the previously allocated memory
    newSize -> new size

*/

// On Failure will return NULL

/*
eg
    int *ptr = (int*)malloc(sizeof(int));
    ptr = (int *)realloc(ptr,2*sizeof(int));
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int *ptr = (int *)malloc(2*sizeof(int)); // if sucess it will allocate size else will return null
    if(ptr==NULL) {
        printf("Memory not available or memory allocation failed!!!");
        exit(1);
    }

    printf("Enter the two numbers: \n");
    for(i=0;i<2;i++) {
        scanf("%d",ptr+i);
    }

    // Memory Allocation for two more integers
    ptr = (int *)realloc(ptr,4*sizeof(int));
    if(ptr==NULL)
    {
        printf("Memory not available or memory allocation failed!!!");
        exit(1);
    }

    printf("Enter two more numbers: \n");
    for(i=2;i<4;i++) {
        scanf("%d",ptr+i);
    }

    for(i=0;i<4;i++) {
        printf("%d",*(ptr+i));
    }
    return 0;
}