#include<stdio.h>
#include<string.h>

// Union - It is the special data type that store different data type in the same memory location

union Data {
    int i;
    float f;
    char s[21];
};

int main()
{
    union Data data;
    printf("Memory size occupied by data: %d\n",sizeof(data));
    return 0;
}