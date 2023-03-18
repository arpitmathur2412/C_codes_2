#include<stdio.h>// maximum and minimum between 2 numbers using functions//
int maxmin(int a,int b){
    if(a>b){
        return a;
    }
    else if(b>a){
        return b;
    }
    else 
    return 0;
}
int main(){
int a,b;
printf("enter the first number:");
scanf("%d",&a);
printf("enter the first number:");
scanf("%d",&b);

printf("the maximum is %d",maxmin(a,b));
}