#include<stdio.h>
void main()
{
int DST,TANK,FC; // distance, tank capacity, fuel consumption 

printf ("Enter fuel tank capacity in liters: ");
scanf("%d",&TANK);
printf ("Enter fuel consumption (km/l): ");
scanf("%d",&FC);

DST=FC*TANK;

printf("Your travel distance in km: %d\n",DST);

}
