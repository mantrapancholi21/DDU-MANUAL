#include <stdio.h>

int main()
{
    int n, i, j, symmetric = 1;   // assume symmetric until we find a mismatch

    printf("Enter order of the matrix (n): ");
    scanf("%d", &n);

    int a[n][n];
    int *p = &a[0][0];            // pointer to the first element

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", (p + i * n + j));

    // matrix is symmetric if a[i][j] == a[j][i] for all i, j
    // (that means the matrix is equal to its transpose)
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (*(p + i * n + j) != *(p + j * n + i))
            {
                symmetric = 0;
                break;
            }
        }
        if (symmetric == 0)
            break;
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
