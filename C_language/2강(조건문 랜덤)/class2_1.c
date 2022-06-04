#include <stdio.h>

int main(void) {
	int a,b;
	int quotient;
	int remainder;
	
	scanf("%d %d",&a,&b);
	
	if(a==0 || b==0){
		printf("ERROR, not allow 0");
	}
	else{
		quotient=a/b;
		remainder=a%b;
		printf("quotient=%d, remainder=%d",quotient,remainder);
	}
	
	return 0;
}

//조건문