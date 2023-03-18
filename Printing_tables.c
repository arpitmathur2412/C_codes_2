#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
   
   for(int i=1;i<=20;i++)
   {
            for(int j=1;j<=10;j++){
         t=i*j;
        printf("%d*%d=%d\n",i,j,t);
        
         }
printf("----------------\n");
    }

}

