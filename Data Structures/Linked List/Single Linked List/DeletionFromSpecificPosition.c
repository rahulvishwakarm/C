#include<stdio.h>
#include<stdlib.h>

//Creating the node
struct Node
{
    int data;
    struct Node *next;
};

struct Node *head = NULL;

struct Node *NodeCreation(int data)
{
    struct Node *Nodes = (struct Node*) malloc(sizeof(struct Node));
    Nodes->data = data;
    Nodes->next = head;
    head = Nodes;
}

struct Node *InsertioAtBeginning(int data)
{
    struct Node *begNode = (struct Node*) malloc(sizeof(struct Node));
    begNode->data = data;
    begNode->next = head;
    head = begNode;
}

struct Node *InsertioAtSpecificPosition(int data,int pos)
{
    struct Node *specificNode = (struct Node*) malloc(sizeof(struct Node));
    specificNode->data = data;
    struct Node *ptr = head;
    for(int i=1;i<pos;i++) {
        ptr = ptr->next;
        if(ptr==NULL)
        {
            printf("Insertion is not possible!!\n");
            printf("Reached at the end of the list!!");
        }
    }
    specificNode->next = ptr->next;
    ptr->next = specificNode;
}

struct Node *LastNodeInsertion(int data)
{
    struct Node *lastInsert = (struct Node*) malloc(sizeof(struct Node));
    lastInsert->data = data;
    lastInsert->next = NULL;
    struct Node *ptr = head;
    while (ptr->next!=NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = lastInsert;
}

struct Node *DeleteFromBeginning()
{
    if(head==NULL) {
        printf("Linked List is empty!!");
    }
    struct Node *deltptr = head;
    head = head->next;
    free(deltptr);
    deltptr = NULL;
}

struct Node *DeleteFromSpecificPosition(int pos)
{
    struct Node *deltptr;
    struct Node *ptr = head;
    for(int i=1;i<pos-1;i++) {
        ptr = ptr->next;
    }
    deltptr = ptr->next->next;
    free(ptr->next);
    ptr->next = deltptr;
}

struct Node *TraverseList()
{
    struct Node *ptr = head;
    printf("[head]=>");
    while (ptr!=NULL)
    {
        printf("%d=>",ptr->data);
        ptr = ptr->next;
    }
    printf("[NULL]\n");
}

int main()
{
    NodeCreation(10);
    NodeCreation(20);
    NodeCreation(30);
    NodeCreation(40);
    TraverseList();
    InsertioAtBeginning(50);
    TraverseList();
    InsertioAtSpecificPosition(32,2);
    TraverseList();
    LastNodeInsertion(9);
    TraverseList();
    DeleteFromBeginning();
    TraverseList();
    DeleteFromSpecificPosition(2);
    TraverseList();
}