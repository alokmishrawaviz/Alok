#include<stdio.h>
int main()
{
    int i=0,j=0,min,p;
   int  arr[5]={8,4,6,3,1};
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
          min=arr[i];
          p=i;
          for(j=i;j<5;j++)
         {
             if(arr[j]<min)
             {
                min=arr[j];
                p=j;
             }
            

         }
          arr[j]=arr[p]+arr[j];
          arr[p]=arr[j]-arr[p];
          arrr[j]=arr[j]-arr[p]
         
         printf("%d",arr[j]);

   
    }
    return 0;
}
