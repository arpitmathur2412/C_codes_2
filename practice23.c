#include <stdio.h>/*program to find minimum number of 10 and 5 rupee coins required to complete*/

int main(void) {

int c; //number of 10 rupee used//
int d; //number of 5 rupee used//
int sum,n;
int ans;
printf("enter the number of test cases:");
scanf("%d",&n);

for(int i=1;i<=n;i++){

printf("enter test case %d:",i);
scanf("%d",&sum);
c=sum/10;
if(sum%10==5){
    d=1;
    ans=c+d;
    printf("%d\n",ans);
    }
    
else if(sum%10==0){
    d=0;
    ans=c+d;
    printf("%d\n",ans);
    }
else if(sum%10!=5||sum%10!=0){
    printf("-1\n");
    }

}
	return 0;
}

