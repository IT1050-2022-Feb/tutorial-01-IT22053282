/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int mark1,mark2; //declare veriable
  float avg;
  
  printf("enter first mark : ");
  scanf("%d",&mark1);
  
  printf("enter second mark : ");
  scanf("%d",&mark2);
   
  avg=(mark1+mark2)/2.0; //calculation
   
  printf("Average : %.2f",avg); //get the answer
   
  return 0;
}

