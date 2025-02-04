#include<stdio.h>
int main()
{
	int num1,num2;
	char operator;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
	printf("Enter the operator:");
	scanf(" %c",&operator);
	switch(operator)
	{
		case '+':
		
			int sum;
			sum=num1+num2;
			printf("the sum of two number is %d",sum);
			break;
		
		
		case '-':
		
			int diff;
			diff=num1-num2;
			printf("the differance of two number is %d",diff);
			break;
		
		
		case '*':
		
			int product;
			product=num1*num2;
			printf("the product of two number is %d",product);
			break;
		
		
		case '/':
		
			float quotient;
			if(num2!=0)
			{
				quotient=(float)num1/num2;
				printf("the qoutient of two number is %.2f",quotient);
				break;
			}
			else
			{
				printf("number2 can't be ZERO");
			}
		
		
		case '%':
		
			int reminder;
			reminder=num1%num2;
			printf("the reminder of two number is %d",reminder);
			break;
		
		default:
		
			printf("INVALID ERROR");
		
	}
	return 0;
	
}

