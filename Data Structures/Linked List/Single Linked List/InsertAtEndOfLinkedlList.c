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
    head->data = 45;
    head->next = NULL;
    struct Node *second = malloc(sizeof(struct Node));
    second->data = 65;
    second->next = NULL;
    struct Node *third = malloc(sizeof(struct Node));
    third->data = 76;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Creating the node to be inserted
    struct Node *ptr , *fourth;
    ptr = head;
    fourth = malloc(sizeof(struct Node));
    fourth->data = 56;
    fourth->next = NULL;
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = fourth;

    // Traversing Linked List
    struct Node *point = head;
    int count = 0;
    while (point!=NULL)
    {
        count++;
        printf("%d ",point->data);
        point=point->next;
    }
    printf("No of nodes: %d",count);
}