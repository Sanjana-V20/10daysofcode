#include <stdio.h>
#include <stdlib.h>
int main()
{
    long num;
    int digit,rem,count=0;
    printf("Enter the number: ");
    scanf("%ld",&num);
    printf("Enter the digit to be counted:");
    scanf("%d",&digit);
    while(num!=0)
    {
        rem=num%10;
	if(rem==digit)
            count++;
        num=num/10;
    }
    printf("Digit frequency of the given digit is %d.", count);
}
