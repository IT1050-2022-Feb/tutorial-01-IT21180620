/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  float marks[2];
  float sum = 0;
  int a;

  for(a=0; a < 2; a++){
    printf("PLEASE ENTER SUBJECT %d MARK - ",a+1);
    scanf("%f",&marks[a]);
    sum += marks[a];
  }
  printf("AVERAGE = %.2f",sum/2.0);

  
  return 0;
}

