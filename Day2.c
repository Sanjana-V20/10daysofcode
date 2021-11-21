#include<stdio.h>
void main() 
{
    int a[20], reverse[20], i, n;
    printf("Enter the array size : ");    
    scanf("%d",&n);
    printf("Enter the array : ");
    for (i=0;i<n;i++) 
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        reverse[i]=a[n-i-1];
    }
    printf("Reverse array : ");
    for(i=0;i<n;i++) 
    {
      printf("%d ",reverse[i]);
    }
}
