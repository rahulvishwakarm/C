#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head = NULL;
struct Node *last = NULL;
struct Node *current = NULL;
struct Node *first = NULL;

void insert(int d)
{
    struct Node *link1 = malloc(sizeof(struct Node));
    link1->data = d;
    link1->next = NULL;
    link1->prev = NULL;

    if(head==NULL) {
        head = link1;
        return;
    }
    current = head;

    while (current->next!=NULL)
    {
        current = current->next;
    }
    current->next = link1;
    last = link1;
    link1->prev = current;
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
    printf("<=>[Head]\n");
};

void insertAtBegining(int bt)
{
    struct Node *newNode = malloc(sizeof(struct Node));
    newNode->data = bt;
    newNode->next = NULL;
    newNode->prev = NULL;
    struct Node *insertbeg = NULL;
    if(head==NULL)
    {
        first = newNode;
        first = head;
        last = head;
    }
    else
    {   
        insertbeg = newNode;
        insertbeg->next = head;
        head->prev = insertbeg;
        head = insertbeg;
    }
};

int main()
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    insert(55);
    printList();
    insertAtBegining(10);
    printList();
}