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
    lnk->next=head->next;
    head->next=lnk;
    return head;
};

struct Node *InsertAtEnd(struct Node *head,int data)
{
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    lnk->next = head->next;
    head->next = lnk;
    head = lnk;
    return head;
};

struct Node *InsertAfter(struct Node *head,int data)
{
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = data;
    int aftrnode;
    printf("After which node do you want to insert this node: ");
    scanf("%d",&aftrnode);
    struct Node *ptr = head;
    for(int i=0;i<aftrnode;i++)
    {
        ptr = ptr->next;
    }
    lnk->next = ptr->next;
    ptr->next = lnk;
    if(ptr==head)
    {
        head=head->next;
    }
    return head;
}

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
    } while (ptr!=head->next);
    printf("[head]");
};

int main()
{
    struct Node *head = NULL;
    head = InsertInEmpty(head,22);
    head = InsertAtBeginning(head,11);
    head = InsertAtEnd(head,33);
    head = InsertAfter(head,19);
    travserse(head);
}