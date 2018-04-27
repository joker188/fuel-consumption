#include<stdio.h>
void main()
{
int DST,TANK,FC; // distance, tank capacity, fuel consumption 
float PRICE,SUMP; // price, sum price

printf ("Enter fuel tank capacity in liters: ");
scanf ("%d",&TANK);
printf ("Enter fuel consumption (km/l): ");
scanf ("%d",&FC);
printf ("Enter price of fuel: ");
scanf ("%f",&PRICE);

DST=FC*TANK;
SUMP=PRICE*TANK;

printf ("Your travel distance in km: %d\n",DST);
printf ("Money for fuel: %g\n",SUMP);

}
