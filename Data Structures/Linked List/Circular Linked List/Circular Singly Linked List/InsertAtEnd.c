#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *InsertInEmpty(struct Node *head,int data)
{
    if(head!=NULL)
    {
        return head;
    };
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    head = lnk;
    lnk->next = head;
    return head;
};

struct Node *InsertAtBeginning(struct Node *head,int data)
{
    if(head == NULL)
    {
        return InsertInEmpty(head,data);
    }
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    struct Node *temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = lnk;
    lnk->next = head;
    return head;
};

struct Node *InsertAtEnd(struct Node *head,int data)
{
    if (head==NULL)
    {
        return InsertInEmpty(head,data);
    }
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    struct Node *ptr = head->next;
    do
    {
        printf("%d",ptr->data);
        ptr = ptr->next;
    }
    while(ptr!=head);
    ptr->next = lnk;
    lnk->next = head;
    head = lnk;
    return head;
};

void travserse(struct Node *head)
{
    if(head==NULL)  
    {
        printf("Linked list is Empty!!");
    }
    struct Node *ptr = head->next;
    printf("[head]->");
    do
    {
        printf("%d->",ptr->data);
        ptr = ptr->next;
    }
    while (ptr!=head->next);
    printf("[head]");
};

int main()
{
    struct Node *head = NULL;
    head = InsertInEmpty(head,22);
    head = InsertAtBeginning(head,11);
    head = InsertAtEnd(head,33);    
    travserse(head);
}