#include<stdio.h>
int main()
{
    int arr[5];
    int i=0;
    printf("Enter the element of array");
    for(i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++){
        if(arr[i]%2==0){
           printf("even element are %d", arr[i]);
           printf("\n\n");
        }
    }
    return 0;
}