#include<stdio.h>
int main()
{
printf("Enter the number:");
int num1,num2,num3;
scanf("%d",&num1);
printf("Enter the number:");
scanf("%d",&num2);
printf("Enter the number:");
scanf("%d",&num3);
if (num1>num2)
{
	if (num1>num3)
	{
		printf("%d is the largest number",num1);}
	else
	{
		printf("%d is the largest number",num3);}
}
else
{
	if(num2>num3)
	{
		printf("%d is the largest number",num2);}
	else
	{
		printf("%d is the largest number",num3);}
}
return 0;
}
