//Experiment-4
//Program-1

#include<stdio.h>
int main()
{
  int a,b,c;

 //Controls the number of rows
  for(a=1;a<=5;a++)
  {
    //Prints space before the numbers
    for(c=1;c<=(5-a);c++)
    {
      printf(" ");
    }

    //Prints numbers from 1 to the current row number
    for(b=1;b<=a;b++)
    {
      printf("%d",b);
    }
    printf("\n");
  }
  return 0;
}
