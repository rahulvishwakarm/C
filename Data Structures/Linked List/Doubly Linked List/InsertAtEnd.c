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

void insertAtEnd(int IE)
{
    struct Node *instAtEnd = malloc(sizeof(struct Node));
    instAtEnd->data = IE;
    instAtEnd->next = NULL;
    instAtEnd->prev = NULL;

    struct Node *kptrack = head;
    while (kptrack->next!=NULL)
    {
        kptrack = kptrack->next;
    }
    kptrack->next = instAtEnd;
    instAtEnd->prev = kptrack;
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
    insertAtEnd(66);
    printList();
}