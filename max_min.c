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
	int max,min,pos_max,pos_min;
	max=a[0];
	min=a[0];
	pos_max=0;
	pos_min=0;
	for(i=1;i<n;i++)
	{
		if (a[i]>max)
		{
			max=a[i];
			pos_max=i;
		}
		if (a[i]<min)
		{
			min=a[i];
			pos_min=i;
		}
	}
	printf("largest element in the array is %d and its postion is %d.\n",max,pos_max);
	printf("smallest element in the array is %d and its postion is %d.\n",min,pos_min);
	return 0;
}
