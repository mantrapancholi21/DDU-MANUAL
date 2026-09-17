//EXPERIMENT 3
//PROGRAM 1
//W.A.P TO CHECK WHETHER GIVEN NO IS ODD OR EVEN
#include <stdio.h>

int main() 
{
    int input;
    printf("\nThis program will show you whether given number is even or odd\n");
    printf("Enter a number :");
    scanf("%d",&input);
    //any number get perfectly divided by 2 then it is even and give remender 1 is odd 
    if(input%2 == 0)
        printf("Given number %d is EVEN",input);
    else
        printf("Given number %d is ODD",input);
    return 0;
}