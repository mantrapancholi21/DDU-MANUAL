//EXPERIMENT 5
//PROGRAM 4
// FINDING MAXIMUM & MINIMUM VALUE WITHOUT SORTING ARRAY
//ALSO SWAPPING PLACE OF MAX & MIN
#include <stdio.h>

int main() 
{
    int n,i,t;//var i is to control loop, t=temporary var,n=no. of element in array
    int maxindex=0,minindex=0;//value of index(i) when a[i] max or min
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
        {
            max=a[i]; // updating max if a[i] is greater
            maxindex=i;
        }
        if(a[i]<min)
        {
            min=a[i]; // updating min if a[i] is smaller
            minindex=i;
        }
    }
    printf("\nMaximum value of array  = %d\n", max);//maximum of array
    printf("Minimum value of array = %d\n", min);  //minimum of array
    //SWAPPING MAX & MIN
    t=a[minindex];
    a[minindex]=a[maxindex];
    a[maxindex]=t;

    printf("\nARRAY AFTER SWAPPING MAX & MIN\n");
    for(i=0;i<n;i++)            // PRINTING SWAPPED ARRAY
    {
        printf("%d",a[i]);
        if(i<n-1)
            printf(",");
    }
    return 0;
}
