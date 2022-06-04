#include <stdio.h>

int main(void) {
	int a,b=10,c=20;
	a = b+c;
	printf("%d %d %d\n",a,b,c);
	a= ++b + ++c;
	printf("%d %d %d\n",a,b,c);
	a= b++ + c++;
	printf("%d %d %d\n",a,b,c);
	a= --b + c--;
	printf("%d %d %d\n",a,b,c);
	a= b-- + --c;
	printf("%d %d %d\n",a,b,c);
	
}

//증감 연산자