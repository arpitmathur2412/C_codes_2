#include<stdio.h>
int main()
{
   for(int i=3;i>=0;i--){
       for(int j=0;j<2*i+1;j++){
           printf("*");
       }
       printf("\n");
   }

    return 0;

}