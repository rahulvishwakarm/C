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

    head->data = 22;
    head->next = NULL;

    second->data = 33;
    second->next = NULL;

    third->data = 44;
    third->next = NULL;
    
    head->next= second;
    second->next = third;

    // Creating the node to be inserted
    struct Node *fourth = malloc(sizeof(struct Node));
    fourth->data = 40;
    fourth->next = NULL;

    // Creating the pointer to insert at specific position
    struct Node *ptr = head;
    int scnf;
    printf("Enter position where do you want to insert the new node?: ");
    scanf("%d",&scnf);
    for(int i=1;i<scnf;i++) {
        ptr=ptr->next; //incrementing pointer till scnf
        if(ptr==NULL) {
            printf("Position not found to insert!!\n");
            printf("Reached at the End, Use end insertion algorithm!!");
        }
    }
    fourth->next=ptr->next;
    ptr->next=fourth;

    // Traversing the List
    struct Node *point = head;
    int count = 0;
    while (point!=NULL)
    {
        printf("%d ",point->data);
        count++;
        point = point->next;
    }
    printf("No of node: %d",count);
}