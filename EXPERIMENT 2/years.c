//Experiment-2
//Program-2

#include<stdio.h>
int main()
{

    int totaldays = 500;
    int originaldays = totaldays;

    // Variables to store years, months and remaining days
    int years, months, days;

    // Calculate the number of complete years
    years = totaldays / 365;

    // Calculate the remaining days after converting years
    totaldays = totaldays - (365 * years);

    // Calculate the number of complete months
    months = totaldays / 30;

    // Calculate the remaining days after converting months
    totaldays = totaldays - (30 * months);

    // Store the remaining days
    days = totaldays;

    // Display the result in years, months and days
    printf("years=%d, months=%d, days=%d", years, months, days);

    return 0;
}
