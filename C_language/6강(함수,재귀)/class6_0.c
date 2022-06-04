#include <stdio.h>

void a(int);
int b(int);
double c(int);
char d(int);

int main(void) {
	int num;
	scanf("%d",&num);
	
	a(num);
	
	printf("%d\n",b(num));
	printf("%f\n",c(num));
	printf("%c",d(num));
	
	return 0;
}

void a(int num){
	printf("%d\n",num);
}

int b(int num){
	return num;
}

double c(int num){
	return num;
}

char d(int num){
	return num;
}