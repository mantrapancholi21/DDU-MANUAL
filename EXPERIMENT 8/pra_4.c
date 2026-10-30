#include<stdio.h>
#include<string.h>
void manipulate_string(char *s1,char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	if(len2>=3)
	{
		for(int i=0;i<3;i++)
			s1[len1+i] = s2[len2-(3-i)];
		
		s1[len1+3] = '\0';
		printf("Modified Stirng: ");
		printf("%s",s1);
	}
	else
		printf("String cannot be copied!");

}
int main()
{
	char s1[100],s2[100];
	printf("Enter 1st string: ");
	scanf("%s",s1);

	printf("Enter 2nd string: ");
	scanf("%s",s2);
	manipulate_string(s1,s2);
	return 0;
}