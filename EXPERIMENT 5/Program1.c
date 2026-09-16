//EXPERIMENT 5
//PROGRAM 1
//this is program to find SUM and AVERAGE of N elements
#include<stdio.h>
int main()
{
    int n,a[n],sum=0;//declerad n before a[n] and sum=0 to find sum of given elements
    float avg;//avg is average of entered element
    printf("ENTER A NO. TILL YOU WANT TO ENTER AN ELEMENT :");
    scanf("%d",&n);
    printf("\nENTER ELEMENTS:\n");
    //loop to get input from user
    for(int i=0; i < n ; i++)
    {
        printf("ELEMENT %d : ",i+1);
        scanf("%d",&a[i]);
        //simultaneously adding elements in var sum
        sum+=a[i];
    }
    printf("\nSum of entered element is : %d\n",sum);
    //finding average of all elements
    avg=(float)sum/n;
    printf("\nAverage of N number is : %.2f\n",avg);
    return 0;
}