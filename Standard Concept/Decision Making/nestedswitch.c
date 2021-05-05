#include<stdio.h>

int main()
{
    int test = 615;
    int test1 = 684;
    switch(test) {
        case 819:
            printf("Your roll no is:%d",test);
            break;
        case 615:
            printf("Hey Rahul\n");
            switch(test1) {
                case 684:
                    printf("Hello Aman!!");
                    break;
                default:
                    printf("Hello Rahul");
            }
            break;
    }
}