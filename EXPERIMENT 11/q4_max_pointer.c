#include <stdio.h>

// finds the biggest element and returns its ADDRESS, not the value
int *findmax(int arr[], int n)
{
    int *max = &arr[0];     // assume first element is the biggest
    int i;

    for (i = 1; i < n; i++)
    {
        if (arr[i] > *max)
            max = &arr[i];  // found a bigger one, remember its address
    }
    return max;
}

int main()
{
    int a[50], n, i;
    int *p;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter %d numbers: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    p = findmax(a, n);      // p now holds address of the max element

    printf("Maximum number is %d\n", *p);
    printf("It is at index %ld\n", (long)(p - a));   // pointer subtraction gives index
    return 0;
}
