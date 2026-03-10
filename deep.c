#include <stdio.h>
int main()
{
float km;
printf("Enter Length in Kilo Meter:"); 
scanf("%f",&km); 
printf("\n %.2f KM = %.2f Metres",km,km*1000);
printf("\n %.2f KM =%.2f Feet",km,km*3280.84);
printf("\n %.2f.KM = %.2f Inches",km,km*39370.08);
printf("\n %.2f KM = %.2f Centimetres",km,km*1000*100);
return 0;
}
