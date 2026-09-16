//Experiment-4
//Program1
//1
//12
//123
//1234
//12345

#include<stdio.h>
int main()
{
  int i,j;

  //Prints the number of rows
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
       printf("%d",j);
    }

   //Moves to the nxt line
    printf("\n");
  }

  return 0;
}

