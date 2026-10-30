#include<stdio.h>
void sort_array(int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>=a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}
int main()
{
	int n;
	printf("Enter how many numbers you want to sort: ");
	scanf("%d",&n);	
	int a[n];
	printf("______Enter elements______\n");
	for(int i=0;i<n;i++)
	{
		printf("Enter element a%d: ",i+1);
		scanf("%d",&a[i]);
	}
	sort_array(a,n);
	printf("______Sorted array______\n");
	for(int i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}