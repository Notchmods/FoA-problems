#include <stdio.h>
#include <stdlib.h>

#define M_PI 3.14159265358979323846
int main()//Method- Container
{
   //Sphere volume calculator
double rad,vol;
rad=0;
printf("Enter the radius in m: ");
scanf("%lf", &rad);
vol=(4*M_PI*pow(rad,3))/3;
printf("\nThe volume of your sphere is %lfm",vol);

 return 0;
}
