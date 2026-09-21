//AUTHOR : MANTRA PANCHOLI
//EXPERIMENT 5
//PROGRAM 5
//THIS PROGRAM INSERT ELEMENT AT INDEX ENTER BY USER
#include <stdio.h>

int main()
{
    int n, i, insert, position;
    //scaning value of n
    printf("ENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d", &n);
    //scaning for input i want to insert
    printf("\nEnter number of element you want to insert :");
    scanf("%d", &insert);

    // Array has space for original + inserted elements
    int a[n + insert];
    //scanning element for array
    printf("\nENTER ELEMENTS OF ARRAY\n\n");

    for (i = 0; i < n; i++)
    {
        printf("Enter element %d:- ", i + 1);
        scanf("%d", &a[i]);
    }
    //printing current array
    printf("Your array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(",");
    }

    printf("\n\nSelect position where you want to insert number :");
    scanf("%d", &position);
    printf("\n");
    position--;

    // Shift elements RIGHT
    for (i = n - 1; i >= position; i--)
    {
        a[i + insert] = a[i];
    }

    // Insert new elements
    for (i = position; i < position + insert; i++)
    {
        printf("Enter element which you want to insert at %dth position: ", i + 1);
        scanf("%d", &a[i]);
    }

    n = n + insert;
    //printing updated array
    printf("\nUpdated array is :");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(",");
    }

    return 0;
}
