#include<stdio.h>

// printf - give output
// scanf - take input

int main()
{
    char str[100];
    int i;

    printf("Enter a value :");
    scanf("%s %d",str,&i); // (&) allows us to pass the address 

    printf("\nYpu entered: %s %d ",str,i);

    return 0; //first put input of str and then of i
}