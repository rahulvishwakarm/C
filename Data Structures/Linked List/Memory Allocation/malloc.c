// malloc allocates memory requested by the user without knowing the type of data to be stored inside the memory.
// eg int *ptr = (int* )malloc(4)

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,n;
    printf("Enter the number of Integer: ");
    scanf("%d",&n);
    int *ptr = (int *)malloc(n*sizeof(int)); // if sucess it will allocate size else will return null
    if(ptr==NULL) {
        printf("Memory not available or memory allocation failed!!!");
    }
    for(i=0;i<n;i++) {
        printf("Enter an Integer: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n;i++) {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}