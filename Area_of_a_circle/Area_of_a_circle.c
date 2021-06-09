#include<stdio.h>
int main(){
    float r,a,pi;
    pi=3.14;

    printf("Enter the radius : ");
    scanf("%f",&r);

    a=pi*r*r;

    printf("The area of circle of given radius %.0f : %.2f",r,a);
    
    return(0);
}