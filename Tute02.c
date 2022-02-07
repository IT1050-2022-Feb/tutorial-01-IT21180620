/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() {

  float Distance, Amount;

  printf("PLEASE ENTER THE DISTANCE VAN HAS TRAVELLED : ");
  scanf("%f",&Distance);

  if (Distance <= 30  && Distance > 0){
    Amount = 50.0 * Distance;
  }
  else if (Distance < 0){
    printf("error");
    return -1;
  }
  else
    Amount =(30.0 * 50.0 )+(Distance-30) * 40.0;

    printf("Amount to be paid = %.0f",Amount);
  
  return 0;
}
