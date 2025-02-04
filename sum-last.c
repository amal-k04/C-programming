#include<stdio.h>
int main()
{
	int num,rev,last,first,rem, sum;
	printf("Enter the number:");
	scanf("%d",&num);
	last=num%10;
	rev=0;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	first=rev%10;
	sum=first+last;
	printf("THE SUM OF DIGIT IS %d",sum);
	return 0;
}
