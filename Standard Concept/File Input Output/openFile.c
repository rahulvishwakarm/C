#include<stdio.h>

void main()
{
    FILE *fp;
    char ch;
    fp = fopen("checkFile.txt","r");
    while (1)
    {
        ch = fgetc(fp);
        if(ch==EOF) //EOF - end of file
        break;
        printf("%c",ch);
    }
    fclose(fp);
}