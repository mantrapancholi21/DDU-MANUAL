//Experiment-4
//Program-3
//...Fibonacci series...

#include <stdio.h>

int main()
{
    int n, a = 0, b = 1, c, i;

     //ask to user how many febonacci terms they want

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    // generate fibonacci series with for loop

    for(i = 1; i <= n; i++)
    {
        printf("%d ", a);

        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
