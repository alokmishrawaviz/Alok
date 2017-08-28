#include<stdio.h>

int main()
{
    int i=0;
    int arr[5];
    
    printf("enter the array element");
    for(i=0;i<5;i++){
  scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++){
     if(((i+1)%2)!=0){
       
         printf(" %d",i);
         printf("\n");
     
     }
     
    }
    return 0;
}