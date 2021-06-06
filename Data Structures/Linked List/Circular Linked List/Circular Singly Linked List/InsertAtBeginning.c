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
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = d;
    head = lnk;
    head->next = head;
    return head;
};

struct Node *addToBeginning(struct Node *head,int d)
{
    if(head == NULL)
    {
        return addToNull(head,d);
    }
    struct Node *lnk = malloc(sizeof(struct Node));
    lnk->data = d;
    struct Node *temp = head;
    while(temp->next!=head)
    {
        temp = temp->next;
    }
    temp->next = lnk;
    lnk->next = head;
    return head;
};

void traverse(struct Node *head)
{
    struct Node *ptr = head->next;
    if (head == NULL)
    {
        printf("List is empty.");
        return;
    }
    printf("Head->");
    do
    {
        printf("%d->",ptr->data); 
        ptr = ptr->next;
    }
    while(ptr!=head->next);
    printf("Head");
};

int main()
{
    struct Node *head = NULL;
    head = addToNull(head,22);
    head = addToBeginning(head,11);
    traverse(head);
    return 0;
}
