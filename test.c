#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main()
{
   float temperature;
   FILE *thermal;
   int n;
   
   thermal = fopen("/sys/devices/virtual/thermal/thermal_zone0/temp", "r");
   /*if (fptr < 0)
   {
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }*/

   n = fscanf(thermal,"%5f",&temperature);
   temperature = temperature/1000;
   fclose(thermal);

   printf("Value of temperature= %.2f\n", temperature);
  
   return 0;
}