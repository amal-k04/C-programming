#include<stdio.h>
#include<string.h>

int main(){
    char newstring[50], string[50];
    printf("Enter the string:-");
    scanf("%s",string);
    strcpy(newstring,string);
    printf("The Copied string is %s",newstring);
    return 0;
}
