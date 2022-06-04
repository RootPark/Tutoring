#include <stdio.h>

int PlusOne(int);

int PlusOne(int n){
	return n+=1;
}

int main(void) {
	int num = 1;
	printf("%d\n",num);
	
	num = 3;
	printf("%d\n",num);
	
	num=PlusOne(num);
	printf("%d\n",num);
	
	return 0;
}
