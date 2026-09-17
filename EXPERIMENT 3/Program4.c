//EXPERIMENT 3
//PROGRAM 4
//W.A.P WHICH PREPARE CALCULATOR WITH SWITCH STATEMENT
#include <stdio.h>

int main() 
{
    int a,b,result;
    char f;
    //SCANING TWO VAR TO PERFORM OPRATIONS
    printf("Enter two value for calculation :\n");
    printf("Value 1 :");
    scanf("%d",&a);
    printf("Value 2 :");
    scanf("%d",&b);
    //SELECTING ARITHMETIC OPERATOR
    printf("\n\nSelect the Arithmetic operation you want to perform:");
    printf("\n1. \"+\" for ADDITION\n2. \"-\" for SUBTRACTION\n3. \"*\" for MULTIPICATION\n4.\"/\" for DIVISION");
    printf("\n\nEnter operator :");
    //WRITTEN \n AS WE PRESS ENTER AFTER VALUE 2 SCANF ENTER=\n STAYS IN INPUT BOX 
    //SO \n IN THIS SCANF WILL TAKE ENTER AS INPUT FOR \n AND OUR OPERATOR WILL BE SCANED PROPERLY 
    scanf("\n%c",&f);
    switch(f)
    {
        case '+' :
            printf("Addition of %d and %d is : %d+%d=%d",a,b,a,b,a+b);
            break;
        case '-' :
            printf("Subtraction of %d and %d is : %d-%d=%d",a,b,a,b,a-b);
            break;
        case '*' :
            printf("Multiplication of %d and %d is : %d*%d=%d",a,b,a,b,a*b);
            break;
        case '/' :
            if(b==0)
                printf("Cannot be divided by 0");
            else
            printf("Division of %d and %d is : %d/%d=%.2f",a,b,a,b,(float)a/b);//TAKEN FLOAT BECAUSE DIVISION CAN BE IN DECIMAL
            break;
        default://DEFAULT CASE IF OTHER THAN +,-,*,/ IS INPUT
            printf("----------Invalid input----------");
    }
    return 0;
}