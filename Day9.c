#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
 
    int n, j;
    int i=0,RightDiagonalSum=0,LeftDiagonalSum=0, firstarray, secondarray;
    
    printf("Enter the size of the square matrix : ");
	scanf("%d",&n);
    int a[n][n];
    
    printf("Enter the matrix elements : \n");
	for(firstarray = 0; firstarray < n; firstarray++)
    {
        for(secondarray = 0; secondarray < n; secondarray++)
        {
         
          scanf("%d",&a[firstarray][secondarray]);
        }
    }
 
    while(i<n)
    {
        RightDiagonalSum=RightDiagonalSum+a[i][i];
        i++;
    }
    
    j=n-1,i=0;
    
    while(i<n)
    {
        LeftDiagonalSum=LeftDiagonalSum+a[i][j];
        i++;
        j--;
    }
    
    printf("%d",abs(RightDiagonalSum-LeftDiagonalSum));
    return 0;
}
