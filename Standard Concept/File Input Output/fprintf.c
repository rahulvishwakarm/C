#include<stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("File.txt","w");
    fprintf(fp,"Inputing this valuse from code to file\n");
    fprintf(fp,"New file wrting...");
    fclose(fp);
}