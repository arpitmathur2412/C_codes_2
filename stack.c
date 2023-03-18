#include<stdio.h>
#include<stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;}

    else return 0;

}

int isFull(struct stack *ptr){
    if(ptr->top==(ptr->size)-1){
        return 1;
    }
    else return 0;
}

int pop(struct stack *ptr){
    return ptr->arr[ptr->top--];

}

int push(struct stack *ptr,int a){
    return printf("\n%d element has been pushed",ptr->arr[++ptr->top]=a);

}
void peek(struct stack *ptr){
    printf(ptr->arr[ptr->top]);
}




int main()
{
    struct stack s;
    s.top=-1;
    s.size=5;
    s.arr=(int*)malloc(s.size*sizeof(int));

    if(isEmpty(&s)){
        printf("it is empty");
    }
    else printf("not empty \n");
    
    if(isFull(&s)){
        printf("\nstack is full");
    }
    else printf("\nit is not full");
    

    push(&s,4);
    push(&s,5);
    push(&s,4);
    push(&s,5);
    push(&s,4);
    pop(&s);

    printf("\n");
    
    if(isEmpty(&s)){
        printf("it is empty");
    }
    else printf("not empty");

    if(isFull(&s)){
        printf("\nstack is full");
    }
    else printf("\nit is not full");


    return 0;
}