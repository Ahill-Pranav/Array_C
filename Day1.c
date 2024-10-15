#include<stdio.h>
int main()
{
  int size,i;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  int array[size];
  printf("Enter the elements of the array:");
  for (i=0;i<size;i++)
  {
    scanf("%d",&array[i]);
  }   
  for (i=0;i<size;i++)
  {
    printf("%d",array[i]);
  }   
}
