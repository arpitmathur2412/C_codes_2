#include<stdio.h>

int sum(int n){
    int sum = n*(n+1)/2;
    return sum;
}
int main(){
    int num;
printf("enter the natural number till which sum is to be found:");
scanf("%d",&num);

printf("the sum of natural numbers is %d",sum(num));



}   