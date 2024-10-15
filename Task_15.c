#include<stdio.h>
int main()
{
    int rows,columns,i,j;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    printf("Enter the amount of columns:");
    scanf("%d",&columns);
    int matrix[rows][columns];
    if(rows<1 || columns>10)
    {
        printf("Invalid Input");
    }
    else
    {
        for(i=0;i<rows;i++)
        {
            for(j = 0;j<columns;j++)
            {
            printf("Enter element:");
            scanf("%d",&matrix[i][j]);
            }
        }
        if(rows==columns)
        {
            printf("Symmetric");
        }
    }
}