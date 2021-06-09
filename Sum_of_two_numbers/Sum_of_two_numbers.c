/*Program to evaluate the sum of two numbers*/
//Author : Aravind
//Roll no. : 339
//Date : 8/6/2021
//Experiment : 1
#include<stdio.h>

int main(){
    int a,b,s;  //Declaring the variables
    
    printf("Enter the numbers : \n");
    scanf("%d%d",&a,&b);    //Revieving input from user
    
    s=a+b;  //Calculation
    
    printf("The sum is : %d",s);        //Printing the result
    
    return(0);
}