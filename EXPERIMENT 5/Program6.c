//EXPERIMENT 5
//PROGRAM 6
//THIS PROGRAM IS TO DELETE PERTICULAR ELEMENT ENTER BY USER
#include <stdio.h>

int main() 
{
    int n, i, delete;
    //scaning value of n
    printf("ENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d", &n);
    //declaration of array a
    int a[n];
    //scaning element for array
    printf("\nENTER ELEMENTS OF ARRAY\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:- ", i + 1);
        scanf("%d", &a[i]);
    }
    //printing current array
    printf("\nYour array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(",");
    }
    //selecting element form array to delete
    printf("\n\nEnter number of particular element you want to delete : ");
    scanf("%d",&delete);
    delete--;
    printf("\nNumber you selected to delete is %d",a[delete]);
    for ( i = delete; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    n--;//updating size of array
    //printing updeted array
    printf("\n\nYour updated array is :");
    for (i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
        if (i < n - 1)
            printf(",");
    }
    return 0;
}