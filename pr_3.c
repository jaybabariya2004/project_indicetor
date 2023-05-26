#include<stdio.h>

int main()

{
	char a[100];

	char *b=a;

	int count=0;	

	printf("Enter the string:\n");

	gets(a);	

	while(*b!='\0')

	{
		count++;
		b++;
	}	

	printf("Length of string= %d",count);
	return 0;

}
