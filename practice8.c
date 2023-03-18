#include<stdio.h>//1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 + 6!/6 + 7!/7.....n!/n//
int main(){
int f=1,n,j, sum=1;
printf("enter the value to find factorial:");
scanf("%d",&j);
for(n=1;n<=j-1;n++){
    f=1;
for(int i=1;i<n+1;i++){
    f=f*i;

}
sum=sum+f;
}
printf("\nthe sum is %d",sum);
}

