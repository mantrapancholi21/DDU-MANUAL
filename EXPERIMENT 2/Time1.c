//Experiment-2
//Program-3

#include <stdio.h>
int main()
{

    // Store the total number of seconds
    int totalseconds = 8500;

    int originalseconds = totalseconds;

    // Declare variables for hours, minutes and seconds
    int hours, minutes, seconds;

    // Convert total seconds into hours
    hours = totalseconds / 3600;

    // Remove the hours from total seconds
    totalseconds = totalseconds - (3600 * hours);

    // Convert the remaining seconds into minutes
    minutes = totalseconds / 60;

    // Remove the minutes from total seconds
    totalseconds = totalseconds - (60 * minutes);

    // The remaining value represents seconds
    seconds = totalseconds;


    printf("hours=%d, minutes=%d, seconds=%d", hours, minutes, seconds);

    return 0;
}

