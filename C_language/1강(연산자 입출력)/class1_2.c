#include <stdio.h>

int main(void) {
	int a=10,b=0;
	int temp=a;
	a=b;
	b=temp;
	printf("%d %d ",a,b);
	return 0;
}
