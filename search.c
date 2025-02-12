#include <stdio.h>
int main()
{
	printf("Enter the size of the array:");
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the element:");
		scanf("%d",&a[i]);	
	}
	int key,pos,flag;
	printf("Enter the value:");
	scanf("%d",&key);
	pos=0;
	for(i=0;i<n;i++)
	{
		if (key==a[i])
		{
			pos=i;
			flag=1;
		}
		
	}
	if (flag==1)
	{
		printf("THE VALUE IS FOUND AT THE POSTION %d.\n",pos);
	}
	else
	{
		printf("THE VALUE IS NOT FOUND");
	}
	return 0;
}
