//double ended queue

#include<stdio.h>

struct queue{
    int front,rear;
    int arr[5];
};


int isFull(struct queue *ptr){
    if(ptr->front==4){
       return 1;
    }
    else return 0;
}

int isEmpty(struct queue *ptr){
    if(ptr->rear==-1){
        return 1;
    }
    else return 0;
}


void enqueue_rear(struct queue *ptr,int a){
    if(isFull(ptr)){
        printf("cannot be enqueued");
    }
    else{
    ptr->arr[++ptr->rear]=a;
    printf("element %d has been enqueued to the rear",a);
    }
}

int dequeue_rear(struct queue *ptr){
    if(isEmpty(ptr)){
        printf("cannot be dequeued");
    }
    else{
    return ptr->arr[ptr->rear];
    ptr->rear++;
    }
}

void enqueue_front(struct queue *ptr,int a){
       if(isFull(ptr)){
        printf("cannot be enqueued");
    }
    else{
    
    printf("%d has been enqueued to the front",a);
}
}

int dequeue_front(struct queue *ptr){
        if(isEmpty(ptr)){
        printf("cannot be dequeued");
    }
    else{
    return ptr->arr[ptr->front];
    ptr->front--;
}
}

int main()
{
    struct queue q1;
    q1.front=-1;
    q1.rear=-1;
    dequeue_front(&q1);
    printf("\n");
    dequeue_front(&q1);
    enqueue_front(&q1,5);
    

    
    
    return 0;
}