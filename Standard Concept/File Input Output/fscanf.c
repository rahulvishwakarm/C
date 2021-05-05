#include<stdio.h>

int main()
{
    FILE *fp;
    char buff[200]; // will be used to store the data
    fp = fopen("File.txt","r");
    while (fscanf(fp,"%s",buff)!=EOF) {
        printf("%s\n",buff);
    }
    fclose(fp);
}