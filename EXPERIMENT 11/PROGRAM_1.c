#include <stdio.h>

// swaps the two values using their addresses (pass by address)
void swap(int *a1, int *b1)
{
    int temp;
    temp = *a1;     // store value of first in temp
    *a1 = *b1;      // put second value in first
    *b1 = temp;     // put old first value in second
}

int main()
{
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    swap(&x, &y);   // we send the addresses, not the values

    printf("After swapping:  x = %d, y = %d\n", x, y);
    return 0;
}
