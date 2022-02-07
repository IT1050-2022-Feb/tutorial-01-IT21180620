/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {

  int number, a, sum;
  printf("ENTER A NUMBER : ");
  scanf("%d",&number);

  a = 1;
  sum = 0;


 for(a=1; a <= number; a++){
   sum += a;
 }
 
  
  printf("sum = %d",sum);
  
  return 0;
}

