#include<stdio.h>
int main()
{
    int size,flag=1;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size-1; j++)
        {
         if(arr[i]==arr[j])
         {
            printf("%d",arr[i]);
            flag=0;
            break;
         }   
        }
        
    }
}