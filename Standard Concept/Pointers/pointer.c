#include<stdio.h>

int main()
{
    int var = 20;
    int *ip;  //pointer variable
    ip=&var;  // stroing the value in pointer variable
    printf("Address of the ip variable: %x\n",&var);

    /*address stored in pointer variable*/
    printf("Address them store in ip variable %x\n",ip);
    printf("Value of *ip variable:%d\n",*ip);
    return 0;
}