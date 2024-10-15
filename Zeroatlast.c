/*#include<stdio.h>
int main()
{
    int size,zero_count=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size],mod_arr[size];
    printf("Elements of the array:");
    for (int  i = 0; i < size; i++)
    {
        if(scanf("%d",&arr[i])!=1)
        {
            printf("Invalid input");
            break;
        }
    }
    for (int i = 0; i < size; i++)
    {
     if (arr[i]!=0)
     {
        mod_arr[i]=arr[i];
     }
     else if (arr[i]==0)
     {
        for (int j = 0; j < size; j++)
        {
            index_of_zero[j]=i;
        }
        
     }
        
    }
    for (int i = count,j=0; i < size,j<size; i++,j++)
    {
        mod_arr[i]=arr[index_of_zero[j]];
    }
}
zero_count++;

}
}
for(int i=zero_count;i<size;i++)
{
    mod_arr[i]=0;
}
for (int i = 0; i < size; i++)
{
    printf("%d",mod_arr[i]);
}

}*/
#include<stdio.h>
int main()
{
    int size,zero_count=0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size],mod_arr[size];
    printf("Elements of the array:");
    for (int  i = 0; i < size; i++)
    {
        if(scanf("%d",&arr[i])!=1)
        {
            printf("Invalid input");
            break;
        }
    }
    int count=0;
    for (int i = 0; i < size; i++)
    {
     if (arr[i]!=0)
     {
        mod_arr[count++]=arr[i];
     }
     else if (arr[i]==0)
     {
    zero_count++;

    }
    }
    for(int i=count;i<size;i++)
    {
        mod_arr[i]=0;
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d\n",mod_arr[i]);
    }

    }