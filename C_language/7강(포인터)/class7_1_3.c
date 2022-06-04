#include <stdio.h>

void PlusOne(int*);

void PlusOne(int* n){
	*n+=1;
}

int main(void) {
	int num=1;
	printf("%d\n",num);
	
	num=3;
	printf("%d\n",num);
	
	PlusOne(&num);
	printf("%d\n",num);
	
	return 0;
}