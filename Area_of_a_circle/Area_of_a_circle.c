/*Program to evaluate the sum of two numbers*/
//Author : Aravind MK
//Roll no. : 339
//Date : 9/6/2021
//Experiment : 2
#include<stdio.h>
int main(){
    float r,a,pi;   //Declaring variables
    pi=3.14;

    printf("Enter the radius : ");
    scanf("%f",&r);     //Recieving input from user

    a=pi*r*r;   //Calculation

    printf("The area of circle of given radius %.0f : %.2f",r,a);   //Printing the result
    
    return(0);
}