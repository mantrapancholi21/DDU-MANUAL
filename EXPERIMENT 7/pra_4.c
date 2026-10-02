/* MADE BY - UJAVAL ASHOK SHARMA
   DDU - IT - F3
   ROLL NO - 131
   DATE - 02/08/2026*/

// This is PSC lab manual's 7th experiment 4th practical//

/* Program: Simple Calculator
   Description: Takes two float input and performs a user-selected
		arithmetic operations using a switch-case structure
		and user-defined functions
*/

#include<stdio.h>
#include<stdlib.h>

// declaring function below //

float add (float,float);
float sub (float,float);
float mul (float,float);
float division (float,float);

int main()
{	
	float a,b;     // Inputs from user //
	float k,l,m,n; // Variables to store the result of operations //
	char c;        // Stores the operation symbol //

	printf("_________Please enter two numbers_________\n");
	printf("Enter value for a: ");
	scanf("%f",&a);

	printf("Enter value for b: ");
	scanf("%f",&b);

	getchar();  // Clears the enter key pressed after inputting numbers in input pipeline //

	start:  // Label used to return here if user doesn't input a correct sign for arithmetic operation //
	
	printf("___________PLEASE CHOOSE A PROCESS__________\n");
	printf("Enter '+' sign for addition\nEnter '-' sign for substraction\nEnter '*' sign for multiplication\nEnter '/' sign for division\n");
	scanf("%c",&c);

	switch(c)
	{
		case '+': // Case for performing addition //
		{
			k = add (a,b); // Calling add function //
			printf("Addition of %f and %f is %f: ",a,b,k);
			break;
		}
		case '-': // Case for performing substraction //
		{
			l = sub (a,b); // Calling sub function //
			printf("Substraction of %f and %f is %f: ",a,b,l);
			break;
		}
		case '*': // Case for performing multiplication //
		{
			m = mul (a,b); // Calling mul function //
			printf("Multiplication of %f and %f is %f: ",a,b,m);
			break;
		}
		case '/': // Case for performing division //
		{
			if(b==0) // If denominator is 0 then division is not possible //
				printf("Division is not possible\n");
			else{
				n = division (a,b); // Calling division function //
				printf("Division of %f and %f is %f: ",a,b,n);
			}
			break;
		}
		default : // If user doesn't input a correct sign for operation it will be stuck in a forever loop until it chooses a correct sign //
		{
			printf("Incorrect sign please enter appropiate sign to process\n");
			goto start;
		}
	}

	exit(0); // After successful operations the code will be end with a green flag // 
	return 0;
}

float add (float a,float b)
{
	float x = a + b;
	return x;
}

float sub (float a,float b)
{
	float y = a - b;
	return y;
}

float mul (float a,float b)
{
	float z = a * b;
	return z;
}

float division (float a,float b)
{
	float w = a / b;
	return w;
}