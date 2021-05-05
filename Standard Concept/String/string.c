#include<stdio.h>
#include<string.h>

int main()
{
    char name[6] = {'R','A','H','U','L','\0'};
    printf("Name message:%s\n",name);

    char a[12]= "teststringa";
    char b[12];

    //string copy
    strcpy(b,a); 
    printf("String 1%s\t",a);
    printf("String 2%s\n",b);

    //string concatinate
    strcat(a,b);
    printf("Concatinated String:%s \n",a);

    //length of continated string
    int len = strlen(a);
    printf("Concatinated String length:%d\n",len);

    //comparing the string
    printf("Compare result:%d",strcmp(a,b));

    // return pointer
    printf("Pointer of a:%x\n",strstr(a,b));    
} 