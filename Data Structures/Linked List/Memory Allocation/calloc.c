// calloc() function is used to dynamically allocate multiple block of memory
// It is different from malloc in two ways
// 1. It requires two arguments instead of just one
//    Syntax: void *calloc(size_t n,size_t size);
//    eg:     int *ptr = (int*)calloc(10,sizeof(int))
// 2. Memory alocated by calloc is initialized to zero

// calloc stands for clear allocation and malloc stands for memory allocation

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number of Integer: ");
    scanf("%d",&n);
    int *ptr = (int *)calloc(n,sizeof(int)); // if sucess it will allocate size else will return null
    if(ptr==NULL) {
        printf("Memory not available or memory allocation failed!!!");
    }
    for(i=0;i<n;i++) {
        printf("Enter an Integer: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++) {
        printf("%d\t",*(ptr+i));
        printf("%d\t",(ptr+i));
    }
    return 0;
}