#include<stdio.h>
int main()
{
    int i=0;
    int arr[10];
     int searchno = 25;
    

    printf("Enter the element of array");
    for(i=0;i<10;i++)
    {
      scanf(" %d",&arr[i]);
    }


       for(i=0;i<10;i++)
       {
           if(arr[i]==searchno )
           
           {
               printf("\n number found at %d",i+1);
               break;
           }
           if(i==10){
             printf("Not Found");
           }
       }

       return 0;
}