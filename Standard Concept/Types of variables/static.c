#include<stdio.h>

void function() {
    int x=20; //local variable
    static int y=30; //static variable - variable that retains its property is called static variable
    x=x+20;
    y=y+20;
    printf("\n%d%d",x,y);
}

int main()
{
    function();
    function();
    function();
    return 0;
}