#include<stdio.h>
int diameter(int r){
    int dia;
    dia=2*r;
    return dia;
}
float area(int r){
    float ar;
    ar=3.14*r*r;
    return ar;
}
float circumference(int r){
    float cir;
    cir=2*3.14*r;
    return cir;
}

int main(){

int r;
printf("enter the radius:");
scanf("%d",&r);

printf("the diameter is %d",diameter(r));
printf("\nthe circumference is %.2f",circumference(r));
printf("\nthe area is %.2f",area(r));

}