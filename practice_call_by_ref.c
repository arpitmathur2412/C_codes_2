#include<stdio.h>
int add(int *x,int *y){

    int t1=*x+*y;
    int t2=*x-*y;
    *x=t1;
    *y=t2;
    return 0; 
}

int main()
{
    int a=15,b=10;
    printf("the value of a and b now are: %d %d",a,b);
    add(&a,&b);
    printf("\nthe value of a and b now are: %d %d",a,b);

    return 0;
}