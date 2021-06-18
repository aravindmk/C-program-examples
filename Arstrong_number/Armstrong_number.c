/*
Program to check if a number is Armstrong or not
Author : Aravind MK
Roll no. : 339
Date : 17/6/2021
Experiment : 6
*/
#include <math.h>
#include <stdio.h>

int main() {
   int num, Num1, remainder, n = 0;
   float s = 0.0;

   printf("\nEnter an integer: ");
   scanf("%d", &num);

   Num1 = num;

   for (Num1 = num; Num1 != 0; ++n) {
       Num1 /= 10;
   }

   for (Num1 = num; Num1 != 0; Num1 /= 10) {
       remainder = Num1 % 10;

      s += pow(remainder, n);
   }

   if ((int)s == num)
    printf("\n%d is an Armstrong number.\n\n", num);
   else
    printf("\n%d is not an Armstrong number.\n\n", num);
   return 0;
}