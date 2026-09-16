//EXPERIMENT 5
//PROGRAM 4
//FINDING MAXIMUM & MINIMUM VALUE WITHOUT SORTING VARIABLE
//ALSO SWAPPING PLACE OF MAX & MIN
#include <stdio.h>

int main() 
{
    int n,i,t;//var i is to control loop, t=temporary var,n=no. of element in array
    printf("ENTER NUMBER OF ELEMENT IN ARRAY :");
    scanf("%d",&n);
    //defining array a[n] after getting value of n
    int a[n];
    printf("\n");
    //scaning of value for array a[]
    for ( i=0; i < n; i++)
    {  
        printf("ENTER ELEMENT %d :",i+1);
        scanf("%d",&a[i]);
    }

    int max=a[0];//assuming a[0] is max of array
    int min=a[0];//assuming a[0] is min of array

    for ( i = 0; i < n; i++)
    {
        if(a[i]>max)
            max=a[i];//swapping max with a[i] if it is greater than max
        if(a[i]<min)
            min=a[i];//swapping min with a[i] if it smaller than min
    }
    printf("\nMaximum value of array  = %d\n", max);//maximum of array
    printf("Minimum value of array = %d\n", min);  //minimum of array
    //SWAPPING MAX & MIN
    t=max;
    max=min;
    min=t;
    printf("\nSWAPPING MAX & MIN\n");
    printf("\nSWAPED Maximum value of array = %d\n", max);//swaped max of array
    printf("SWAPED Minimum value of array = %d\n", min);  //swaped min of array
    return 0;
}