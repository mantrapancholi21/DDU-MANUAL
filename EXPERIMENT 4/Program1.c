//Experiment-4
//Program1
//*
//**
//***
//****
//*****

#include<stdio.h>
int main()
{
  int i,j;

  //Prints the number of rows
  for(i=1;i<=5;i++)
  {

   //Prints stars according to the row number
    for(j=1;j<=i;j++)
    {
       printf("*");
    }

  //Moves to the nxt line
  printf("\n");
  }
  return 0;
}

