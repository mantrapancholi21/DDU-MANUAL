//EXPERIMENT 3
//PROGRAM 3
//W.A.P THAT WILL DISPLAY GREAD OF STUDENT ACCORDING TO HIS/HER MARKS USING if else ladder
#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int marks;
    printf("Enter your marks out off 100 :");
    scanf("%d",&marks);
    if(marks<0 && marks>100)
    {
        printf("Marks should be between 0 to 100");
    }
    if(marks>80)
        printf("\nYou scored \"A Grade\" in your exam\n");
    else if(marks>60)
            printf("\nYou scored \"B Grade\" in your exam\n");
    else if(marks>50)
            printf("\nYou scored \"C Grade\" in your exam\n");
    else if(marks>40)
            printf("\nYou scored \"D Grade\" in your exam\n");
    else if(marks>35)
            printf("\nYou scored \"E Grade\" in your exam\n");
    else if(marks<=35)
            printf("\n\"YOU FAILED\"\n");
    return 0;
}