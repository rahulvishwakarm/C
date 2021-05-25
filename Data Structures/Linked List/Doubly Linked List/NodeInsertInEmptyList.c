#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

int main()
{
    struct Node *head = NULL;
    struct Node *last = NULL;
    
    // Creating the node
    struct Node *link1 = malloc(sizeof(struct Node));
    int d;
    printf("Enter the data for link 1 :");
    scanf("%d",&d);
    link1->data = d;
    link1->next = NULL;
    link1->prev = NULL;
    
    // Insertion
    if(head==NULL) {
        head = link1;
    }

    // Traversing the List
    printf("[head]");
    struct Node *ptr = head;
    while (ptr->next!=NULL)
    {
        printf("<=>%d",ptr->data);
        ptr = ptr->next;
    }
    printf("<=>%d",ptr->data);
    printf("<=>[head]");
}