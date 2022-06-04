#include <stdio.h>

void swap(int,int);

int main(void) {
	int num1,num2;
	scanf("%d %d",&num1,&num2);
	swap(num1,num2);
}

void swap(int a, int b){
	int tmp=a;
	a=b;
	b=tmp;
	printf("%d %d",a,b);
}