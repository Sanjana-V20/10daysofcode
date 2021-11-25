#include <stdio.h>
#include <string.h>
int main() 
{
    int n, a[20],i;
    float pos_count=0,neg_count=0,zero_count=0;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("The array elements are : ");
    for(i=0;i<n;i++)
    { 
	    scanf("%d",&a[i]);
        if(a[i]>0)
            pos_count++;
        else if(a[i]<0)
            neg_count++;
        else
            zero_count++;
    }
    printf("%.6f\n%.6f\n%.6f",pos_count/n,neg_count/n,zero_count/n);
    return 0;
}
