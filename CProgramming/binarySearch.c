#include<stdio.h>

    int main()
    {
int i,srno,begin,end,mid;
int arr[10]={10,13,24,45,67,9,78,44,66,77};
printf("Enter the search number");
scanf("%d",&srno);
begin=0;
end=10;
 while(begin<end)
     {  srno;
        printf("\n\n\n");
          for(i=begin;i<end;i++)
           {
               printf("%5d",arr[i]);
           }
           
         mid=(begin+end)/2;
         if(srno>arr[mid])
            {
              begin=mid+1;
              for(i=begin;i<end;i++)
                   {
                   if(arr[i]==arr[mid])
                   printf("\n no. is %d",i+1);
                   }

            }else
              if(srno<arr[mid])
              {
                   end=mid-1;
                   for(i=begin;i<end;i++)
                   {
                   if(arr[i]==arr[mid])
                   printf("\n no. is %d",i+1);
                   }
              }else
                  {
                      printf("\n\n Found at %d",mid+1);
                      break;
                  }
      
     }

   if(begin>end) {
                printf("\n\n not found ");
                 }
return 0;

}