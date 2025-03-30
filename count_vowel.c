#include<stdio.h>
#include<string.h>

int main(){
    char string[50];
    printf("Enter the string:-");
    scanf("%s",string);
    char vowe[]="aeiouAEIOU";
    int count_vow=0;
    for (int i=0;i<strlen(string);i++){
        for (int j=0;j<strlen(vowe);j++){
            if (string[i]==vowe[j]){
                count_vow+=1;
                break;
            }
        }
    }
    int count_cons=strlen(string)-count_vow;
    printf("No of Vowels in the Given String is :%d\n",count_vow);
    printf("No of Consonat in the Given String is :%d",count_cons);
    return 0;
}
