#include<stdio.h>
int main()
{
    int size,sum;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    printf("Sum:");
    scanf("%d",&sum);
    if(size<1)
    {
        printf("Invalid size");
    }
    else{
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element:");
       if( scanf("%d",&arr[i])!=1)
       {
        printf("Invalid input.");
        break;
       }
    }
    int found=0;
    for (int i = 0; i < size; i++)
    {
        int pair=0;
        for (int j = i+1; j < size; j++)
        {
            pair=arr[i]+arr[j];
            if (pair==sum)
            {
                printf("\nPairs found:(%d,%d)",arr[i],arr[j]);
                found=1;
            }
            
        }
        
    }
    if(!found)
    {
        printf("No pairs found");
    }
}
}