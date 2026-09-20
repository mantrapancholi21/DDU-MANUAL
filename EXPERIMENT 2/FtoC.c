//Experiment-2
//Program-1
//Faherenheit to Celsius Temperature Conversion

#include<stdio.h>
int main()
{
  float C,F;
  printf("Enter the value of F: ");
  scanf("%f",&F);

  C= (F-32)/1.8;
  printf("C=%f",C);

  return 0;
}
