#include<stdio.h>
#define max 100
#define x 20
#define MULTIPLY(a, b) a*b 
#define merge(a,b) a##b   //Token Pasting operator
#define get(a) #a //This token convert the value of a into string

int main()
{
    printf("max is %d",max);
    putchar('\n');
    printf("Increment %d",x);
    putchar('\n');
    printf("Multiplication %d",MULTIPLY(2,3));
    putchar('\n');
    printf("%d",merge(11,12));
    putchar('\n');
    printf("%s",get(12));

    //File System
    printf("Current FIle: %s\n",__FILE__);
    printf("Current Date: %s\n",__DATE__);
    printf("Curremt Time: %s\n",__TIME__);
    printf("Line Number : %s\n",__LINE__);

    //undef
    printf("get funcion calling before undef: %s",get(25312));
    #undef get();
    printf("get functiion cal;ling after undfe:",get(45462));  // Uncomment it to verify
    return 0;
}