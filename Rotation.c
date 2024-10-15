#include<stdio.h>
int main() 
{
    int size,rotation;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter the elements:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Rotation value:");
    scanf("%d",&rotation);
    for(int i=0;i<rotation;i++)
    {
        int temp=array[0];
        for (int j = 0; j < size-1; j++)
        {
            array[j]=array[j+1];
        }
        array[size-1]=temp;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",array[i]);
    }

}