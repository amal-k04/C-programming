#include<stdio.h>
#include<string.h>
int main()
{
	char str1[40],str2[40];
	printf("Enter the first string: ");
	scanf("%s",str1);
	printf("Enter the second string: ");
	scanf("%s",str2);
	if (strcmp(str1,str2)==0)
	{
		printf("The given two strings were same");
	}
	else
	{
		printf("The given two strings were NOT same");
	}
	return 0;
}
