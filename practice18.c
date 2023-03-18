#include<stdio.h>
int main()
{
    char a1='a';
    char a2='A';
    for(char a1='a';a1<='z';a1++){
        printf("%c ",a1);
    }
    printf("\n");

    for(char a2='A';a2<='Z';a2++){
        printf("%c ",a2);
    }
    return 0;
}