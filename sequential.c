#include <stdio.h>
int main()
{
 int i,n,pos=0,key,flag=0;
  printf("Enter Array Size:");
  scanf("%d",&n);
  printf("Enter Elements:");
 int a[n];  
   for(i=0;i<n;i++)
      {
       scanf("%d",&a[i]);
      }
  printf("Enter Key:");
  scanf("%d",&key);
   for(i=0;i<n;i++)
      {
       if(a[i]==key)
         {
          flag=1;
          pos=i;
          break;
         }
      }
   if(flag==0)
     {
      printf("Element not found");
     }
   else
     {
      printf("Element %d is found at the index %d\n",key,pos);
     }
 return 0;
}                  
