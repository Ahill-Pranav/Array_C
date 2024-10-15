/*#include<stdio.h>
int main()
{
    int size_arr1,size_arr2;
    printf("Enter the size of array 1:");
    scanf("%d",&size_arr1);
    printf("Enter the size of array 2:");
    scanf("%d",&size_arr2);
    int array1[size_arr1],array2[size_arr2],unsorted_array[size_arr1+size_arr2];
    for(int i=0;i<size_arr1;i++)
    {
        printf("Enter the elements of array 1:");
        scanf("%d",&array1[i]);
    }
    for(int i=0;i<size_arr1;i++)
    {
        printf("Enter the elements of array 2:");
        scanf("%d",&array2[i]);
    }

}
int sorting(int array[],int size)
{
    int unsorted=array[0];
    for(int i = 1; i < size; i++)
    {
        if(array[i]<unsorted)
        {
            int temp=array[i];
            array[i]=unsorted;
            unsorted=temp;
        }
    }
    
}*/
#include<stdio.h>
void merging(int array1[],int array2[],int size1, int size2,int merged_array[])
{
    for (int i=0;i<size1;i++)
    {
        merged_array[i]=array1[i];
    }
    for (int i = size1,j=0; i < (size1+size2) && j<size2 ; i++,j++)
    {
        merged_array[i]=array2[j];

    }
}
void sorting(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        for (int j = i+1; j < size; j++)
        {
              if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
        
      
    }
}
int main()
{
    int size1,size2;
    printf("Enter the size of array 1:");
    scanf("%d",&size1);
    printf("Enter the size of array 2:");
    scanf("%d",&size2);
    int arr1[size1],arr2[size2];
    int size=size1+size2;
    int merged_array[size];
    printf("Enter the elements of Array 1:");

    for(int i=0;i<size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("Enter the elements of Array 2:");

    for(int i=0;i<size2;i++)
    {
        scanf("%d",&arr2[i]);
    }
    merging(arr1,arr2,size1,size2,merged_array);
    printf("Merged array:\n");
    for (int i = 0; i < size1+size2; i++)
    {
        printf("%d\t",merged_array[i]);
    }
    sorting(merged_array,size);

    printf("Sorted array:\t");
    for (int i = 0; i < size1+size2; i++)
    {
        printf("%d\t",merged_array[i]);
    }
}