#include<stdio.h>

int main() 
{
    int a=10;
    while(a<35) {
        if(a==29) {
            printf("Found target: %d",a,"\t");
            break;
        }
        printf("Value is: %d\t",a);
        a++;
    }
}