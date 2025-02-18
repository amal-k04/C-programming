#include <stdio.h>
int main()
{
	int r1,c1;
	printf("Enter the size of first marix:");
	scanf("%d %d",&r1,&c1);
	int mat[r1][c1],trans[r1][c1];
	printf("Enter the matrix\n");
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			printf("Enter the element:");
			scanf("%d",&mat[i][j]);
		}
	}
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			trans[j][i]=mat[i][j];
		}
	}
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			printf("%d\t",mat[i][j]);
		}
		printf("\n");
	}
	for (int i=0;i<r1;i++)
	{
		for (int j=0;j<c1;j++)
		{
			printf("%d\t",trans[i][j]);
		}
		printf("\n");
	}
	return 0;
}
