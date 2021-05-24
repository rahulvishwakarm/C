#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *last = NULL;
struct Node *current = NULL;

void insert(int d) {
    struct Node *link = malloc(sizeof(struct Node));
    link->data = d;
    link->next = NULL;
    link->prev = NULL;

    if(head==NULL) {
        head = link; // if head is null create the new link
        return;
    }
    current = head;
    while (current->next!=NULL)
    {
        current = current->next;
    }
    current->next = link;
    last = link;
    link->prev = current;
};


void printList() {
    struct Node *ptr = head;
    printf("[head] <=>");
   //start from the beginning
    while(ptr->next != NULL) {        
        printf(" %d <=>",ptr->data);
        ptr = ptr->next;
    }   
    printf(" %d <=>",ptr->data);
    printf(" [head]\n");
}

int main() 
{
    insert(11);
    insert(22);
    insert(33);
    insert(44);
    insert(55);
    // Print the Circular Linked List
    printList();
}