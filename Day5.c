#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j, n, start=0;
	printf("Enter a number : ");
	scanf("%d", &n);
	
	int size = (2*n)-1; 
    int end = size - 1;
	int arr[size][size];

	while(n!=0)
	{
		for(i=start; i<=end; i++){
			for(j=start; j<=end; j++){
				if(i==start || i==end || j==start || j==end)
				arr[i][j] = n;
			}
		}
		start++;
		end--;
		n--;
	}
	for(i=0; i<size; i++){
		for(j=0; j<size; j++){
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
