#include<stdio.h>
int main()
{
printf("Enter the first number:");
int num1,num2;
scanf("%d",&num1);
printf("Enter the second number:");
scanf("%d",&num2);
(num1>num2)?printf("%d is largest",num1):printf("%d is largest",num2);
return 0;
}
