//Experiment-4
//Program1
//Pattern-3
//    *
//   * *
//  * * *
// * * * *
//* * * * *

#include<stdio.h>
int main()
{
  int i,j,k;

  // Controls the number of rows
  for(i=1;i<=5;i++)
  {
    for(k=1;k<=(5-i);k++)
    {
      // Prints spaces before the stars
       printf(" ");
    }

    for(j=1;j<=i;j++)
    {
      // Prints stars in each row
      printf("* ");
    }

    // Moves to the nxt line
    printf(" \n");
  }

  return 0;
}

