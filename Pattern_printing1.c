#include<stdio.h>
int main(int argc, char const *argv[])
{ int i;
char c='A';

for(i=1;i<6;i++){
    for(int j=1;j<i+1;j++){
        printf("%c",c);
    }
    printf("\n");
    c++;
}



        
    
   
    return 0;
}
