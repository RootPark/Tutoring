#include <stdio.h>

int main() {
	int A,B;

	scanf("%d %d",&A,&B);
	int temp=A;
	A=B;
	B=temp;
	printf("%d %d",A,B);
	
	return 0;
}
