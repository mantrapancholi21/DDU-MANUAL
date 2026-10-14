#include<stdio.h>
float expo(int x,int y)
{
	int i=0,t;
	if(i==y)
		return 1;
	t = x*expo(x,y-1);
	return t;
}
int main()
{
	float exponent;
	int x,y;
	printf("Enter value for x: ");
	scanf("%d",&x);
	printf("Enter value for y: ");
	scanf("%d",&y);

	exponent = expo(x,y);
	printf("Ans of %d's exponent to %d is: %f",x,y,exponent);
	return 0;
}