#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head = malloc(sizeof(struct node)); //head pointer will be able to access Node
    head->data = 45;
    head->link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL; 
    head->link = current;

    struct node *current1 = malloc(sizeof(struct node));
    current1->data = 76;
    current1->link = NULL;
    head->link = current1;

    /*
        Alternate way
        // third node
        current = malloc(sizeof(struct node));
        current->data = 76;
        current->link = NULL;

        head->link->link = current; // 
    */

}