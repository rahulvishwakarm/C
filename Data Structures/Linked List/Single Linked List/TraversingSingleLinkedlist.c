#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

int main()
{
    struct node *head = malloc(sizeof(struct node));
    struct node *second = malloc(sizeof(struct node));
    struct node *third = malloc(sizeof(struct node));
    
    // Allocating the values for first node
    head->data = 23;
    head->next = NULL;

    // Allocating the values for second node
    second->data = 45;
    second->next = NULL;
    head->next = second;

    // Allocating the values for third node
    third->data = 56;
    third->next = NULL;
    second->next = third;

    // Traversing th array
    int count = 0; // count for nodes
    if(head==NULL)
    {
        printf("Linked List is empty");
    }; 
    struct node *ptr = NULL; // variable to point the node
    ptr = head;
    while (ptr!=NULL)
    {
        count++;
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }
    printf("\nNo of Node: %d",count);
}