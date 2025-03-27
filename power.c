#include <stdio.h>

int expo(int num,int ex){
    if (ex==1)
        return num;
    else
        return num*expo(num,ex-1);
}

int main() {
    int base,power;
    printf("Enter the Base Number:-");
    scanf("%d",&base);
    printf("Enter the Power of Base:-");
    scanf("%d",&power);
    printf("The Value of %d**%d is %d",base,power,expo(base,power));
    return 0;
}
