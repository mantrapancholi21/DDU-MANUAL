//EXPERIMENT 3
//PROGRAM 2
//W.A.P TO CHECK WHETHER GIVEN NO IS POSITIVE, NEGATIVE OR 0
#include <stdio.h>

int main() 
{
    int input;
    printf("\nThis program will show whether given number is POSITIVE, NEGATIVE OR 0\n");
    printf("Enter a number :");
    scanf("%d",&input);
    if(input>0)// if any is greater than 0 than it will be printed as Positive number
        printf("Given number %d is \'POSITIVE\'",input);
    else if(input<0)// if any is lesser than 0 than it will be printed as Negative number
        printf("Given number %d is \'NEGATIVE\'",input);
    else
        printf("Given number %d is \'0\'",input);
    return 0;
}
