#include<stdio.h>
int main()
{
	int num,fact,element;
	printf("Enter the limit:");
	scanf("%d",&num);
	element=num;
	if (0<=num)
	{
	fact=1;
		while(num>0)
		{
			
			fact=fact*num;
			num--;
			
		}
	printf("FACTORIAL OF %d is %d",element,fact);
	}
	else
	{
		printf("NUMBER SHOULD BE A POSTIVE NUMBER");
	}
	
	return 0;
	
}
