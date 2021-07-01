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
}

