#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

int main()
{
    struct Node *head = malloc(sizeof(struct Node));
    head->data = 11;
    head->prev = NULL;
    head->next = NULL;
}