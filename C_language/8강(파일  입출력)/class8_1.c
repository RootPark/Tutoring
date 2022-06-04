#include <stdio.h>

int main(void) {
	
	int c;
	c = getchar();
	putchar(c);
	printf("\n");
	c = getchar();
	printf("First Buffer %c\n",c);
	c = getchar();
	
	printf("Second Buffer %c\n",c);
	
}