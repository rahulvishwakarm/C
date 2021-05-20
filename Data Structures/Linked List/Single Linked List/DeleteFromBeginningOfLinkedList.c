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

    head->data = 11;
    head->next=NULL;

    second->data = 22;
    second->next = NULL;

    third->data = 33;
    third->next = NULL;

    head->next = second;
    second->next = third;

    // Traversing the List
    struct Node *ptr1 = head;
    while (ptr1!=NULL)
    {
        printf("%d\t", ptr1->data);
        ptr1 = ptr1->next;
    }

    // Deleting the Node
    if(head==NULL) {
        printf("Linked List is empty!!");
    }
    else{
        struct Node *temp = head;
        head = head->next;
        free(temp);
        temp = NULL;
    }

    // Traversing the List
    struct Node *ptr2 = head;
    printf("\n");
    while (ptr2!=NULL)
    {
        printf("%d\t", ptr2->data);
        ptr2 = ptr2->next;
    }
    
}