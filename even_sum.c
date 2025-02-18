#include <stdio.h>

int main() {
    int limit,sum;
    printf("Enter the limit:");
    scanf("%d",&limit);
    sum=0;
    for (int i=0;i<limit;i+=2)
    {
        sum=sum+i;
    }
    printf("the sum of even number upto %d is %d",limit,sum);

    return 0;
}