#include<stdio.h>

// fputc() function is used to write a single character into file
int main()
{
    FILE *fp;
    fp = fopen("SingleLine.txt","w");
    fputc('p',fp);
    fclose(fp);
}