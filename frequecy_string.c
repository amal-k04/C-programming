#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	int len,i=0,j=0,count;
	printf("Enter the string:");
	scanf("%[^\n]",str);
	len=strlen(str);
	for (i=0;i<len;i++)
	{
	count=1;
		if(str[i]!='\0')
		{
			for (j=i+1;j<len;j++)
			{
				if (str[i]==str[j])
				{
				count++;
				str[j]='\0';
				}
				
			}
			printf("%c : %d\n",str[i],count);
			
		}
	}
	return 0;
}
