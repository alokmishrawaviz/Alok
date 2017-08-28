#include<stdio.h>


int main()
{
    int arr[10];
    int i=0;
   
    printf("value of array");
     
     for(i=0;i<10;i++)
     {
         scanf("%d",&arr[i]);
     }

     printf("print the array");
     for(i=0;i<10;i++)
     {
         printf("%d",arr[i]);
     }
     return 0;

}