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

    if(head == NULL)
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

void deletefromSpecPos()
{ 
    printf("Which Node do you want to delete: ");
    int deletePos;
    scanf("%d",&deletePos);
    struct Node *deleteptr = head;
    for (int i = 1; i < deletePos-1; i++)
    {
        deleteptr = deleteptr->next;
    }
    deleteptr->next = deleteptr->next->next;
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
    deletefromSpecPos();
    printList();
}