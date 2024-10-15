#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size],rev_array[size],copy_size=size;
    for(int i=0;i<size;i++)
    {
        printf("Enter the elements:");
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {
        rev_array[i]=array[size-1];
        size-=1;
    }
    for (int  i = 0; i < copy_size; i++)
    {
        printf("%d",rev_array[i]);
    }
    
}