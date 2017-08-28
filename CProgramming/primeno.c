#include<stdio.h>
int main()
{
     int i=0;
     int  counter =0;
     int arr[5];
     printf("enter the element of array");
       for(i=0;i<5;i++)
    {
        scanf("\n %d",&arr[i]);
    }
       for(i=0;i<5;i++) 
       {      counter =0;
              for(int j=1;j<=arr[i];j++)
                  {
                     
                      if(arr[i]%j==0){
                      counter++;
                     }}
                 if(counter==2)
                    {
                       printf(" the number is prime %d",arr[i]);
                    }
                 
                  }

        
                  
  return 0;
} 