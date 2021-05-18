#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));

    head->data = 22;
    head->next = NULL;

    second->data = 33;
    second->next = NULL;

    third->data = 44;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Creating the node to be inserted at the beginning
    struct Node *zero = malloc(sizeof(struct Node));
    zero->data = 11;

    // Inserting
    zero->next = head;
    head = zero;

    // Traversing the List
    struct Node *ptr = head;
    int count = 0;
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        count++;
        ptr = ptr->next;
    }
    printf("No of node: %d",count);
}