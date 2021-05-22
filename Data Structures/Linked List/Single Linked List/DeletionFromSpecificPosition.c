#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));
    struct Node *fifth = malloc(sizeof(struct Node));

    head->data = 11;
    head->next = NULL;

    second->data = 22;
    second->next = NULL;

    third->data = 33;
    third->next = NULL;

    fourth->data = 44;
    fourth->next = NULL;

    fifth->data = 55;
    fifth->next = NULL;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Traversing the List
    struct Node *ptr1 = head;
    while (ptr1!=NULL)
    {
        printf("%d\t",ptr1->data);
        ptr1 = ptr1->next;
    }

    printf("\n");

    // Deleting the List
    struct Node *point = head;
    struct Node *pnt;

    int NTOD;
    printf("Which Node to delete?: ");
    scanf("%d",&NTOD);

    // Deleting
    for(int i=1;point!=NULL && i<NTOD-1;i++) {
        point = point->next;
    }
    if(point==NULL || point->next==NULL) {
        printf("Node Not found, You are deleting last node!!");
    }
    pnt = point->next->next; //holding node next to node to be deleted so that it can be accessed
    free(point->next);
    point->next = pnt;

    // Traversing the List
    struct Node *ptr2 = head;
    while (ptr2!=NULL)
    {
        printf("%d\t",ptr2->data);
        ptr2 = ptr2->next;
    }
}