#include<stdio.h>//0,1,1,2,3,5,8,....//

     int fib(int n)
    {
        if(n==1||n==2){
        return n-1;
        }
        else {
            return fib(n-1)+fib(n-2);
        }

    }
    int main(){
        int n;
        printf("enter the position:");
        scanf("%d",&n);
        printf("%d",fib(n));

    }
  