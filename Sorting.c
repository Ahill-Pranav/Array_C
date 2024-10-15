#include<stdio.h>
void sorting(int arr[],int size)
{
    arr[size];
    for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size-1; j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
        
    }
}
int main()
{
int size;
printf("Enter the size of the array:");
scanf("%d",&size);
int arr[size];
printf("Enter the elements:");
for(int i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
}
sorting(arr,size);
for (int  i = 0; i < size; i++)
{
    printf("%d ",arr[i]);
}

}