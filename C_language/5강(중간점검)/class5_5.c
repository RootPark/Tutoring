#include <stdio.h>
#include <math.h>

int main(void) {
	int num1;
	int num2;
	scanf("%d %d",&num1,&num2);
	
	
	int num3=pow(10,num2);
	
	if(num2>0){
		printf("%d.%d",num1/num3,num1%num3);
	}
	else{
		printf("%d",num1);
	}
}