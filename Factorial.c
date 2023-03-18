#include<stdio.h>//sum of factorial till j numbers
int main(){
int f=1,n,j, sum=0;
printf("enter the value to find factorial:");
scanf("%d",&j);
for(n=1;n<=j;n++){
    f=1;
for(int i=1;i<n+1;i++){
    f=f*i;

}
printf(" %d ",f);
sum=sum+f;
}
printf("\nthe sum is %d",sum);
}


