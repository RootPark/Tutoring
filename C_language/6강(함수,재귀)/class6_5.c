#include <stdio.h>

void reprint();

int main(void) {
	printf("input : ");
	reprint();
	printf("\n");
	return 0;
}

void reprint(){
	int num=getc(stdin);
	if(num!='\n'){
		reprint();
	}
	printf("%c",num);
}