#include<stdio.h>  //parenthesis matching problem
#include<stdlib.h>

struct stack{
    int top;
    int size;
    char *arr;
};
int isEmpty(struct stack *s){
    if(s->top==-1){
        return 1;
    }
    else return 0;

} 
int isFull(struct stack *s){
    if(s->top=(s->size)-1){
        return 1;
    }
    else return 0;
}
void push(struct stack *s,char *c){
    s->arr[++s->top]=*c;

}
void pop(struct stack *s){
    s->arr[s->top--];
}

int parenthesis_match(char *c){
    struct stack s1;
    s1.top=-1;
    s1.size=20;
    s1.arr=(char*)malloc(s1.size*sizeof(char));

    for(int i=0;c[i]!='\0';i++){
        if(c[i]=='('){
            if(isEmpty(&s1)){
                push(&s1,&c[i]);
            }
            else break;
        }
        else if(c[i]==')'){
            if(s1.arr[s1.top]=='('){
                pop(&s1);
            }
            else push(&s1,&c[i]);
        }
    }
    if(isEmpty(&s1)){
        printf("parenthesis are matching");
    }
    else printf("parenthesis are not matching");
}
int main()
{   
    char *c="a8()";
    parenthesis_match(c);
    return 0;
}