#include<stdio.h>
int main()
{
    int eng,maths,phy;
    float per;
    
    printf("enter the marks of english:");
    scanf("%d",&eng);
    printf("enter the marks of maths:");
    scanf("%d",&maths);
    printf("enter the marks of physics:");
    scanf("%d",&phy);
    
    per=(eng+maths+phy)/3;

    if(eng<35||maths<35||phy<35||per<40){
        printf("you have failed");

    }
    else {
        printf("you have passed");
    }

    return 0;
}
