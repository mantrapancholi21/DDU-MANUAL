//EXPERIMENT 5
//PROGRAM 2
//FINDING RESULTANT MATRIX OF PRODUCT OF TWO MATRIX
#include <stdio.h>

int main()
{
    int i,j;
    //a,b,c are 3 martix aXb=c
    int a[3][3],b[3][3],c[3][3];
    //scaning value for matrix a
    printf("ENTER ELEMENTS FOR MATRIX A\n\n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%dx%d=",i+1,j+1);
            scanf("%d",&a[i][j]);
        }   
    }
    //scaning value for matrix b
    printf("\nENTER ELEMENTS FOR MATRIX B\n\n");
    for ( i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%dx%d=",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    //calculation of matrix c (product of a and b matrix)
    for(i=0;i<3;i++)//loop for row
    {
        for ( j = 0; j < 3; j++)//loop for column
        {
            c[i][j]=0;
            for(int k=0;k<3;k++)//this loop fix row for matrix A and column for matrix B
            {
                c[i][j]+= a[k][j]*b[i][k];
            }
        
        }
    }
    //printing of final resultant matrix
    printf("\nRESULTANT MATRIX OF AxB=C\n\n");
    for ( i = 0; i < 3; i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d  ",c[i][j]);
            if(j==2)
                printf("\n");
        }
    }
    return 0;
}