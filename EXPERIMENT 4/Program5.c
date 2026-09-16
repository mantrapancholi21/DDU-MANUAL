//Experiment-4
//Program-5
//... Given number is Prime or not...

#include <stdio.h>
int main()
{
    // declare varialbes

    int n, i, term = 0;

    // take number from user

    printf("Enter a number: ");
    scanf("%d", &n);

      // find number is prime or not with for loop and if statment

    for(i = 1; i <= n; i++)

     // check weather i is a factorial of n
        if(n % i == 0)
        {
            term++;
        }
    }
    // a prime number has exactly two factors : 1 and itself
    if(term== 2)
        printf("%d is a Prime Number", n);

    else
        printf("%d is Not a Prime Number", n);

    return 0;
}
