// Queue cannot be implemented using linear Array because, if we use linear array its initial slot will be wasted
#include<stdio.h>
#include<stdlib.h>

struct QueueUsingArray
{
    int front, rear, size;
    unsigned capacity;
    int *array;
};

struct QueueUsingArray *createQueue(unsigned size)
{
    struct QueueUsingArray *queue = malloc(sizeof(struct QueueUsingArray));
    if(!queue) return NULL;
    queue->capacity = size;
    queue->front = queue->rear = -1;
    queue->array = malloc(queue->capacity*sizeof(int));
    return queue;
};

int isFUll(struct QueueUsingArray *queue)
{
    return ((queue->rear+1)%queue->capacity==queue->front);
}

int isEmpty(struct QueueUsingArray *queue)
{
    return (queue->front ==-1);
}

int QueueSize(struct QueueUsingArray *queue)
{
    return(queue->capacity-queue->front+queue->rear+1)%(queue->capacity);
}

void enQueue(struct QueueUsingArray *queue,int item)
{
    if(isFUll(queue))
    {
        return;
    }
    else
    {
        
    }
    queue->rear = (queue->rear+1)%queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size+1;
    printf("%d enqueued to queue\n",item);
}

int deQueue(struct QueueUsingArray *queue)
{
    if(isEmpty(queue))
    {
        return INT_MIN;
    }
    int item = queue->array[queue->front];
    queue->front = (queue->front+1)%queue->capacity;
    queue->size = queue->size-1;
    return item;
}

int front(struct QueueUsingArray *queue)
{
    if(isEmpty(queue))
    {
        return INT_MIN;
    }
    return queue->array[queue->front];
}

int rear(struct QueueUsingArray *queue)
{
    if(isEmpty(queue))
    {   
        return INT_MIN;
    }
    return queue->array[queue->rear];
}

int main()
{
    struct QueueUsingArray *queue = createQueue(1000);
    enQueue(queue,10);
    enQueue(queue,20);
    enQueue(queue,30);
    enQueue(queue,40);
    printf("%d dequeue from queue\n",deQueue(queue));  
    printf("Front item is %d\n",front(queue));
    printf("Rear item is %d\n",rear(queue));
    return 0;
}