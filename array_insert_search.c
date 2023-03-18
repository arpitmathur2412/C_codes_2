#include<stdio.h>
void insert(int a[],int b,int r){
    r=a[b]; 
}
int main()
{
    //array input
    int n,a[n+1],k,x;
    printf("enter the max index:");
    scanf("%d",&n);

    for(int i=0;i<=n;i++){
        printf("enter %d element: ",i);
        scanf("%d",&a[i]);
    }
    
    // traverse
    for(int j=0;j<=n;j++){ 
        printf("%d ",a[j]);
    }
   
    printf("\n");
    
    //search
    printf("enter the index to search:");
    scanf("%d",&k);
    if(k<=n){
        printf("%d",a[k]);
    }
    else if(k>n){
        printf("index out of bounds");
    }
    printf("\n");

    //insertion
    printf("enter the element to insert:");
    scanf("%d",&x);

    insert(a[n+1],(n+1),2);

    for(int j=0;j<=n+1;j++){
        printf("%d",a[j]);
        
    }  




    


    
    
    

    return 0;
}