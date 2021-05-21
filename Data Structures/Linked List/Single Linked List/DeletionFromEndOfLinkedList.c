#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    struct Node *second = malloc(sizeof(struct Node));
    struct Node *third = malloc(sizeof(struct Node));
    struct Node *fourth = malloc(sizeof(struct Node));

    head->data = 11;
    head->next = NULL;

    second->data = 22;
    second->next = NULL;

    third->data = 33;
    third->next = NULL;

    fourth->data = 44;
    fourth->next = NULL;

    third->data = 33;
    third->next = NULL;

    head->next = second;
    second->next = third;
    third->next = fourth;

    // Traversing the array
    struct Node *ptr1 = head;
    while(ptr1!=NULL) {
        printf("%d\t",ptr1->data);
        ptr1 = ptr1->next;
    }

    // Deleting Node
    struct Node *pos = head;
    struct Node *ps;
    while(pos->next!=NULL) {
        ps = pos;
        pos = pos->next;
    }
    ps->next=NULL;
    free(pos);

    printf("\n");

    // Traversing the array
    struct Node *ptr2 = head;
    while(ptr2!=NULL) {
        printf("%d\t",ptr2->data);
        ptr2 = ptr2->next;
    }
}