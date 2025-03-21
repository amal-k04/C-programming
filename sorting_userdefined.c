#include<stdio.h>
int sorting(int arr[],int size){
int temp,i,j;
for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++) { 
            if(arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for(i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");}
int main(){
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size];
    for (int k=0;k<size;k++){
        printf("enter the element:");
        scanf("%d",&arr[k]);
    }
    sorting(arr,size);
    return 0;
}
