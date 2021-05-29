#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    
    // Creating the node
    struct Node *first = malloc(sizeof(struct Node));
    first->data = 11;
    head = first;
    first->next = head;
    
    // Travserse List
    struct Node *ptr = head->next;
    do
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    while((ptr!=head->next));
    
}