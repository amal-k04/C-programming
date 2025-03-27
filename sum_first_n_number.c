#include <stdio.h>

int add( int num){
    if (num==1)
        return num;
    else
        return num+add(num-1);
}

int main() {
    int num;
    printf("Enter the limit:-");
    scanf("%d",&num);
    printf("The Sum of First %d Natural Number is %d",num,add(num));
    return 0;
}
