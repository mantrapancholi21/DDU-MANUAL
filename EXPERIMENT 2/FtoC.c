//Experiment-2
//Program-1
//Faherenheit to Celsius Temperature Conversion

#include<stdio.h>
int main()
{
  //Declare variables to store Celsuis and Fahrenheit
  float C,F;
  
  //Ask user to enter the value
  printf("Enter the value of F: ");
  
  //Take Fahrenheit value as input from the user
  scanf("%f",&F);

  //Convert Fahrenheit temp. to Celsuis
  C= (F-32)/1.8;

  //Display the temp. in Celsuis
  printf("C=%f",C);

  return 0;
}
