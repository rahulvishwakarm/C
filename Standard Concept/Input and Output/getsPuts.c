#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter the value:");
    gets(str); //Take the input

    printf("\nYou entered: ");
    puts(str); //Print that input

    return 0;
}