#include<stdio.h>
int main()
{
	char str[30],temp;
	int i,j,len;
	printf("Enter the string:");
	scanf("%[^\n]",str);
	for (len=0;str[len]!='\0';len++);
	i=len-1;
	for (i=len-1,j=0;j<(len/2);j++,i--)
		{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			
		}
		printf("Thr reversed string is:%s",str);
		return 0;
}
