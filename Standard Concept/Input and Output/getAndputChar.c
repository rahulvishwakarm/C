#include<stdio.h>
#include<string.h>

// getchar - use to takethe input
// putchar - take the passed input and print the character one by one

int main()
{
    int c;
    printf("Enter a value : ");
    c=getchar();

    printf("\nYou entered:");
    putchar(c);

    return 0;
}