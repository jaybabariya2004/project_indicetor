#include<stdio.h>

int main(){
	
	int a;
	int *b;

	
	printf("Enter a value : ");
	scanf("%d",&a);
	b=&a;
	
	printf("%d => %d",b,a);
	
	return 0;
}
