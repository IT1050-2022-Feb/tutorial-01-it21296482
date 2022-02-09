/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
   int a,b;
   float avg;
   printf("Enter the marks for subject 1 :",a);
   scanf("%d",&a);
   printf("Enter the marks for subject 2 :",b);
   scanf("%d",&b);
   
   avg=(a+b)/2.0;
   printf("The average of the two marks : %.2f",avg);
   
  
  return 0;
}

