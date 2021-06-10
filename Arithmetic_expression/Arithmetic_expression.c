/*
Program to evaluate the arithmetic operation ((a-b/c*d+e)*(f+g))
Author : Aravind MK
Roll no. : 339
Date : 8/6/2021
Experiment : 3
*/
#include<stdio.h>

int main(){
    int a,b,c,d,e,f,g,s;    //Declaring variables
    printf("Enter the values of a,b,c,d,e,f,g\n");
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);   //Recieving input from user

    s=((a-b/c*d+e)*(f+g));  //Calculation

    printf("\nThe result is : %d",s);   //Printing the result
    
    return(0);
}