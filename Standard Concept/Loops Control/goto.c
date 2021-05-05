#include<stdio.h>

int main()
{
    int a=10;
    tst: do {
        if(a==17) {
            printf("Entered into gooto\n");
            a=a+1;
            goto tst;
        }
        printf("Cuurrent Value is:%d\t",a);
        a=a+1;
    }
    while(a<30);
    return 0;
}