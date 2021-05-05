#include<stdio.h>

int main()
{
    for(int i=0;i<10;i++) {
        printf("%d",i);
        for(int j=0;j<i;j++) {
            printf("%d\t",i,j);
        }
    }
}