#include<stdio.h>
#include<conio.h>

// fgetc - return the single character in the form of stream
int main() 
{
    FILE *fp;
    char c;
    fp=fopen("SingleLine.txt","r");

    while((c=fgetc(fp))!=EOF) {
        printf("%c",c);
    }
    fclose(fp);
    getch();
}