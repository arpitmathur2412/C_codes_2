#include<stdio.h>//functions for finding average of 3 numbers//
float avg(int a, int b, int c){

    float avg=(a+b+c)/3;
    return avg;

}
int main(){
int a,b,c;
    printf("enter the numbers:");
    scanf("%d%d%d",&a,&b,&c);

    printf("the average is %f",avg(a,b,c));
}