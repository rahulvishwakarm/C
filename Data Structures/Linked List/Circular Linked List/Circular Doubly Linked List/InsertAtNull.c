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
    lnk->prev = NULL;
    head = lnk;
    lnk->next = head;
};

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
    head = addToEmpty(head,11);
    traverse(head);
}