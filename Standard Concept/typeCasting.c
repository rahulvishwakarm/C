//Type-Casting : Changing the data type of the variable/objects
#include<stdio.h>

int main()
{
    int a = 12;
    float c = 23.5;

    float a_f = (float)a;
    printf("Current value:%i\t",a);
    printf("To float:%f\n",a_f);

    int c_i = (int)c;
    printf("Current value:%f\t",c);
    printf("To Integer:%i",c_i);
}   