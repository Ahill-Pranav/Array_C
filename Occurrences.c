#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int array[size],occurrences[size];
    printf("Enter the elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&array[i]);
    }
    for(int i=0;i<size;i++)
    {
        occurrences[i]=0;
    }
    for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (array[i]==array[j])
            {
                occurrences[i]+=1;
            }
            
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (occurrences[i]>0)
        {
         printf("%d.%d",array[i],occurrences[i]);
         occurrences[i]=0;
        }
    }
}   