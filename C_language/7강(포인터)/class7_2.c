#include <stdio.h>

void swap(int* a,int* b);

void swap(int* a,int* b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void) {
	int num1 = 3, num2 = 5;
	
	printf("num1 = %d num2 = %d\n",num1,num2);
	swap(&num1,&num2);
	printf("num1 = %d num2 = %d\n",num1,num2);
	
	return 0;
}