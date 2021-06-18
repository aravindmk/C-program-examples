/*
Program to find the largest of three numbers
Author : Aravind MK
Roll no. : 339
Date : 17/6/2021
Experiment : 4
*/
#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("\nEnter 1st number : ");
    scanf("%d",&n1);
    printf("Enter 2nd number : ");
    scanf("%d",&n2);
    printf("Enter 3rd number : ");
    scanf("%d",&n3);

    if (n1>n2){
        if (n1>n3){
            printf("%d is the greatest number",n1);
        }
        else{
            printf("%d is the greatest number",n3);
        }
    }
    else{
        if (n2>n3){
            printf("%d is the greatest number",n2);
        }
        else{
            printf("%d is the greatest number",n3);
        }
    }
    return(0);
}