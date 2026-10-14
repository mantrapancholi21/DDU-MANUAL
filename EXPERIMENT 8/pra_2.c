#include<stdio.h>
int sum_of_digits(int n)
{
	if(n<10)
		return n;
	return (n%10) + sum_of_digits(n/10);
}
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	int temp = n;
	int sum = sum_of_digits(n);
	printf("sum of digits of %d is: %d",temp,sum);
	return 0;
}