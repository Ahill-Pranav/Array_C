#include<stdio.h>
int main()
{
 int size,pos;
 printf("n:");
 scanf("%d",&size);
 int arr[size],mod_arr[size-1];
 printf("A = ");
 for (int i = 0; i < size; i++)
 {
    scanf("%d",&arr[i]);
 }
 printf("pos:");
if(scanf("%d",&pos)!=1)
{
    printf("Invalid input");
}
for (int i = 0,j=0; i < size; i++)
{
    if(i!=pos)
    {
        mod_arr[j++]=arr[i];
    }
}
 for (int i = 0; i < size-1; i++)
 {
    printf("%d\t",mod_arr[i]);
 }
}