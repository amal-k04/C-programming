#include <stdio.h>
int main() {
    int num,count,number;
    printf("Enter the number:");
    scanf("%d",&num);
    count=0;
    number=num;
    for(int i=1;num!=0;i++)
    {
        num=num/10;
        count+=1;
    }
    printf("the no: of digit in %d is %d",number,count);

    return 0;
}