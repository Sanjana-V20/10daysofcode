#include<stdio.h>
#include<stdlib.h>  
int main()
{  
    int a,b,i,c,n,j;    
    printf("Enter the limit : ");    
    scanf("%d",&n);    
    for(i=1;i<=n;i++)    
    {      
        a = 0;
        b = 1;
        printf("%d ",b);    
        for(j=1;j<i;j++)    
        {    
            c=a+b;    
            printf("%d ",c);    
            a=b;    
            b=c;    
    
        }    
        printf("\n");    
    }    
    return 0;  
}  
