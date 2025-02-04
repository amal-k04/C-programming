#include<stdio.h>
int main()
{
const float pie=3.14;
int radius;
printf("Enter the radius:");
scanf("%d",&radius);
float area=(float)pie*radius*radius;
printf("The area of the circle is :%.2f",area);
return 0;
}
