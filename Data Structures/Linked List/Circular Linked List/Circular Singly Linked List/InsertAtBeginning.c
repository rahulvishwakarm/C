#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *addToNull(struct Node *head,int d)
{
    if (head != NULL)
        return head;
    struct Node *lnk = (struct Node *)malloc(sizeof(struct Node));
    lnk->data = d;
    head = lnk;
    head->next = head;
    return head;
};

struct Node *addToBeginning(struct Node *head,int d)
{
    if(head = NULL)
    {
        return addToNull(head,d);
    }
    struct Node *lnk = (struct Node *)malloc(sizeof(struct Node));
    lnk->data = d;
    lnk->next = head->next;
    head->next = lnk;
    return head;
};

void traverse(struct Node *head)
{
    struct Node *ptr;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    do
    {
        printf("%d",ptr->data); 
        ptr = ptr->next;
    }
    while(ptr!=head->next);
};

int main()
{
    struct Node *head = NULL;
    head = addToNull(head,22);
    head = addToBeginning(head,11);
    traverse(head);
    return 0;
}
