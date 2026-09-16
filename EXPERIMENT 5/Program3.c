//EXPERIMENT 5
//PROGRAM 3
//SORTING ELEMENTS BY BUBBLE SORTING METHOD
#include <stdio.h>

int main() 
{
    int n,t,i,j;//t is temporary variable, i & j are variable for running loop, n is for element in array a[]
    printf("\nENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d",&n);
    //defined array a[] after geting value of n from user
    int a[n];
    //scaning of value for array a[]
    for ( i=0; i <n; i++)
    {  
        printf("ENTER ELEMENT %d :",i+1);
        scanf("%d",&a[i]);
    }
    for ( j = 0; j < n; j++)//inner loop sort and swap place of var for only one time 
    {                       //this for loop of j run this inner loop n times
        for ( i = 0; i < n-1; i++)
        {
            //swaping variable if a[i]>a[i+1]
            if(a[i]>a[i+1])
            {
                t=a[i];
                a[i]=a[i+1];
                a[i+1]=t;
            }
        }
    }
    //printing sorted array
    printf("\nSORTED ARRAY\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
        if(i<n-1)
        printf(",");
    }
    
    return 0;
}