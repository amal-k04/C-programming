#include<stdio.h>
int main()
{
printf("Enter the first number:");
int temp,num1,num2;
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
printf("Before swapping number1=%d and number2=%d\n",num1,num2);
temp=num1;
num1=num2;
num2=temp;
printf("After swapping number1=%d and number2=%d\n",num1,num2);
return 0;
}
