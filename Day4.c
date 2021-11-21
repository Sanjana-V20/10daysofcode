#include<stdio.h>
int main()
{
	int arr[20], i, n, key, flag=0;
	printf("Enter the array size : ");
	scanf("%d", &n);
	printf("Enter the elements of the array : ");
	for(i=0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("Enter the key element : ");
	scanf("%d", &key);
	printf("The index of the key element is : ");
	for(i=0; i<n; i++)
	{
		if(arr[i]==key)
	    {
		    printf("%d ", i);
		    flag = 1;
	    }
	}
	if(flag==0)
	    printf("Key element is not found\n");
	return 0;
}
