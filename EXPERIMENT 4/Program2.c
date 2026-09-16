//Finding Factorial
//Experiment-4
//Program-2

#include <stdio.h>
int main()
{
    int n, i, fact = 1;

    //Takes number from the user
    printf("Enter n: ");
    scanf("%d", &n);

    //Calculates the Factorial
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    //Displays the Factorial
    printf("Factorial = %d", fact);

    return 0;
}
