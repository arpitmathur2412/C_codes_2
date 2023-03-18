#include<stdio.h>//finding cube by functions//
int cube(int n){
    int ans;
    ans=n*n*n;
    return ans;
}

int main()
{
    int n;
printf("enter the number to find cube:");
scanf("%d",&n);
printf("the cube is %d",cube(n));


}