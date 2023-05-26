#include<stdio.h>

void swap(int *a,int *b){
	
	int c;
	
	printf("Before swap A : %u => %d\n",a,*a);
	printf("Before swap B : %u => %d\n",b,*b);
	
	c = *a;
	*a = *b;
	*b = c;
	
	printf("After Swap A : %u => %d\n",a,*a);
	printf("After Swap B : %u => %d\n",b,*b);
}
int main(){
	
	int i,j;
	
	printf("Enter First Value : ");
	scanf("%d",&i);
	
	printf("Enter Second Value : ");
	scanf("%d",&j);
	
	swap(&i,&j);
	
	return 0;
}
