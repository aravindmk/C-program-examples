/*
Program to check if a natural number is prime or not
Author : Aravind MK
Roll no. : 339
Date : 17/6/2021
Experiment : 5
*/
#include <stdio.h>

int main(){
  int n, i, l = 0;

  printf("\nEnter the number : ");
  scanf("%d", &n);

  if (n==1 || n==0){
    printf("\n%d is neither prime nor composite\n\n", n);
  }
  else{
    for (i=2; i <= n / 2; ++i){
      if (n % i == 0){
        l = 1;
        break;
      }
    }

    if (l == 0){
      printf("\n%d is a prime number.\n\n", n);
    }
    else{
      printf("\n%d is not a prime number.\n\n", n);
    }
  }
  return 0;
}