#include <stdio.h>

int factorial(int);
int main() {
    int limit;
    printf("Enter the limit:");
    scanf("%d",&limit);
    printf("The factorial of %d is %d",limit,factorial(limit));

    return 0;
}

int factorial(int num) {
    int fact=1;
    while (num!=1){
    fact=fact*num;
    num--;
    }
    return fact;
}
