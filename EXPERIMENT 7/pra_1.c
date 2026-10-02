/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 7th experiment 1st practical//

/* Program: printing = sign 81 times
   Description: program is made to print '=' sign 81 times in a single line 
		using user-defined functions 
*/

#include<stdio.h>

// Declaring function below //

void Printline(void);
int main()
{
	printf("Below this line = sign will be printed 81 times\n");
	Printline(); // Calling Printline function //

	return 0;
}

void Printline(void)
{
	int i;
	for(i=0;i<82;i++)
		printf("=");

}