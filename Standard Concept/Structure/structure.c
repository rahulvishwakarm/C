#include<stdio.h>
#include<string.h>

//Creating Structure
struct Books {
        int ISBN;
        char title[50];
        char author[50];
        char decription[100];
};

int main()
{
    struct Books Book1;
    struct Books Book2;

    Book1.ISBN = 99642526;
    strcpy(Book1.title,"C++ for beginners");
    strcpy(Book1.author,"R S Agrwaal");
    strcpy(Book1.decription,"This title consist all basic concept of C++");

    Book2.ISBN = 91637711;
    strcpy(Book2.title,"Java for Beginners");
    strcpy(Book2.author,"DP Patel");
    strcpy(Book2.decription,"This title consist all basic concept of Java");

    printf("Book 1 ISBN:%d\n",Book1.ISBN);
    printf("Book 1 title:%s\n",Book1.title);
    printf("Book 1 author:%s\n",Book1.author);
    printf("Book 1 description:%s\n",Book1.decription);

    printf("Book 2 ISBN:%d\n",Book2.ISBN);
    printf("Book 2 title:%s\n",Book2.title);
    printf("Book 2 author:%s\n",Book2.author);
    printf("Book 2 description:%s\n",Book2.decription);
}