#include<stdio.h>
void merge(int arr1[],int arr2[],int size1, int size2,int merged[])
{
    for(int i=0;i<size1;i++)
    {
      merged[i]=arr1[i];
    }
    for(int i = size1,j=0 ;i<(size1+size2)&&j<size2;i++,j++)
    {
      merged[i]=arr2[j];
    }
}
void sorting(int arr[],int size)
{
for (int  i = 0; i < size-1; i++)
{
   for (int  j = i+1; j < size; j++)
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
 printf("Size of 1st array:");
 scanf("%d",&size1);
 int arr1[size1];
 printf("Elements of the 1st array:");
 for (int i = 0; i < size1; i++)
 {
    scanf("%d",&arr1[i]);
 }
 printf("Size of 2nd array:");
 scanf("%d",&size2);
 int arr2[size2];
 int merged_arr[size1+size2];
 printf("Elements of the 2nd array:");
 for (int i = 0; i < size2; i++)
 {
    scanf("%d",&arr2[i]);
 }
 
 merge(arr1,arr2,size1,size2,merged_arr);
 for (int i = 0; i < size1+size2; i++)
 {
   printf("%d ",merged_arr[i]);
 }
 sorting(merged_arr,size1+size2);
 printf("\n");
 for (int i = 0; i < size1+size2; i++)
 {
   printf("%d ",merged_arr[i]);
 }
}