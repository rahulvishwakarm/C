#include<stdio.h>
#include<stdlib.h>  // library for memory allocation

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    head->data = 45;  // Node First Part -> Value
    head->link = NULL;  // Node Second Part -> NULL
    printf("%d",head->data);
    return 0;
}


