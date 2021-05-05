#include<stdio.h>

// fseek -  It is used to write data into file at desired location.

int main()
{
    FILE *fp;
    fp = fopen("checkFile.txt","w+");
    fputs("This is javapoint",fp);
    fseek(fp,10,SEEK_SET);
    fputs("New Seek",fp);
    fclose(fp);
}