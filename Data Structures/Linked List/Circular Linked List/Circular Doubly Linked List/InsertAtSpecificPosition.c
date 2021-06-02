#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *addToEmpty(struct Node *head,int data)
{
    if(head!=NULL)
    {
        return head;
    };
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    head = lnk;
    lnk->next = head;
    lnk->prev = lnk->next;
    return head;
};

struct Node *addToBeginning(struct Node *head,int data)
{
    if(head==NULL)
    {
        printf("linked List is Empty!!");
        return head;
    };
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    lnk->next = head;
    lnk->prev = head;
    head->prev = lnk;
    head->next = lnk;
    return head;
}

struct Node *addAtEnd(struct Node *head,int data)
{
    if(head==NULL)
    {
        printf("Linked List is empty!!");
    }
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    struct Node *ptr = head->next;
    lnk->next = ptr;
    lnk->prev = head;
    head->next = lnk;
    ptr->prev = lnk;
    head = lnk;
    return head;
}

struct Node *addAtSpecificPosition(struct Node *head,int data)
{
    if(head==NULL)
    {
        printf("Linked List Is Empty!!");
    }
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    printf("After Which Node do you want to Insert Node: ");
    int nodepos;
    scanf("%d",&nodepos);
    struct Node *ptr = head->next;
    for (int i = 1; i < nodepos; i++)
    {
        ptr = ptr->next;
    }
    lnk->next = ptr->next;
    ptr->next = lnk;
    lnk->prev = ptr->next;
    return head;
}

void traverse(struct Node *head)
{
    struct Node *ptr = head->next;
    printf("[head]<=>");
    do
    {
        printf("%d<=>",ptr->data);
        ptr = ptr->next;
    }
    while (ptr!=head->next);
    printf("[head]");
};

int main()
{
    struct Node *head = NULL;
    head = addToEmpty(head,22);
    head = addToBeginning(head,11);
    head = addAtEnd(head,33);
    head = addAtSpecificPosition(head,23);
    traverse(head);
}