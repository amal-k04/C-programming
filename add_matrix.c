#include <stdio.h>
int main()
{
	int r1,c1,r2,c2;
	printf("Enter the size of first marix:");
	scanf("%d %d",&r1,&c1);
	int mat1[r1][c1],mat2[r1][c1];
	printf("Enter the first matrix\n");
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			printf("Enter the element:");
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter the size of second marix:");
	scanf("%d %d",&r2,&c2);
	if (r1==r2 && c1==c2)
	{
		for (int i=0;i<r1;i++)
		{
			for (int j=0;j<c1;j++)
			{
				printf("Enter the element:");
				scanf("%d",&mat2[i][j]);
			}
		}
		for (int i=0;i<r1;i++)
		{
			for (int j=0;j<c1;j++)
			{
				printf("%d\t",mat1[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		for (int i=0;i<r1;i++)
		{
			for (int j=0;j<c1;j++)
			{
				printf("%d\t",mat2[i][j]);
			}
			printf("\n");
		}
		printf("\n");
		int result[r1][c1];
		for (int i=0;i<r1;i++)
		{
			for (int j=0;j<c1;j++)
			{
				result[i][j]=mat1[i][j]+mat2[i][j];
			}
		}
		for (int i=0;i<r1;i++)
		{
			for (int j=0;j<c1;j++)
			{
				printf("%d\t",result[i][j]);
				
			}
			printf("\n");
		}
	}
	else
	{
		printf("invalid matrix size");
	}
	return 0;
}
