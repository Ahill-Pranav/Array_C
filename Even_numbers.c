#include<stdio.h>
int main()
{
    int size,count=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter elements:");
        scanf("%d",&array[i]);
    }
      for(int i=0;i<size;i++)
    {
        if(array[i]%2==0)
            count++;
    }
    printf("%d",count);
}