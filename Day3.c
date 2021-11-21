#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i, length, flag=0;
	printf("Enter the string : ");
	gets(str);
	length = strlen(str);
	for(i=0; i<length; i++)
	{
		if(str[i]!=str[length-i-1])
		flagp=1;
		break;
	}
	if(flag==0)
	printf("%s is a palindrome string\n",str);
	else
	printf("%s is not a palindrome string",str);
	return 0;
}
