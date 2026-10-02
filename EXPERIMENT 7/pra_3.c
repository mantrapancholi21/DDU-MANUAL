/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 7th experiment 3rd practical//

/* Program: finding total amount after some years of interest 
   Description: total amount is calculated after putting p principal value
		at r% rate of interest for n years it is done by some 
		user-defined functions and it returns the value 
*/

#include<stdio.h>

// Declaring functions below //

float totalAmount (int p,float r,int n);

int main()
{

	int p,n;
	float r,a;
	printf("Enter principal value P: "); // Taking principal value as user-input //
	scanf("%d",&p);

	printf("Enter rate of interest r: "); // Taking rate of interest as user-input //
	scanf("%f",&r);

	printf("Enter number of years n: "); // Taking number of years as user-input //
	scanf("%d",&n);
	
	a = totalAmount(p,r,n); // Calling totalAmount function //

	printf("Total amount of interest %d after %d years is %f",p,n,a); // printing the final amount //

	return 0;
}

float totalAmount (int p,float r,int n)
{
	int i;
	float total=p;
	for(i=0;i<n;i++)
			total = total*(1+r/100);	
	return total;
}