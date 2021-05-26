#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *last = NULL;
struct Node *current = NULL;

void insert(int d)
{
    struct Node *link = malloc(sizeof(struct Node));
    link->data = d;
    link->prev = NULL;
    link->next = NULL;

    if(head==NULL)
    {
        head = link;
        return;
    }
    current = head;

    while (current->next!=NULL)
    {
        current = current->next;
    }
    current->next = link;
    last = link;
    link->prev = current;
};

void insertAtSpecific(int IE)
{
    struct Node *instAtSpecific = malloc(sizeof(struct Node));
    instAtSpecific->data = IE;
    instAtSpecific->next = NULL;
    instAtSpecific->prev = NULL;

    struct Node *ptr = head;
    int nodePos;
    printf("After which node do you want to insert new node: ");
    scanf("%d",&nodePos);
    while (ptr->data!=nodePos)
    {
        ptr=ptr->next;
    }
    instAtSpecific->next = ptr->next;
    ptr->next = instAtSpecific;
    instAtSpecific->prev = ptr->next;
};

void printList()
{
    struct Node *ptr = head;
    printf("[head]");
    while (ptr->next!=NULL)
    {
        printf("<=>%d",ptr->data);
        ptr = ptr->next;    
    }
    printf("<=>%d",ptr->data);
    printf("<=>[head]\n");
};

int main()
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    insert(55);
    printList();
    insertAtSpecific(23);
    printList();
}