#include <stdio.h>

int main(void) {
	
	int num1 = 10;
	int num2;
	
	num2 = num1 == 10 ? 100:200;
	
	printf("%d\n",num2);

}

/*int main(void){
	
	int num3,num4;
	printf("정수 하나 입력하시오. : ");
	scanf("%d",&num3);
	
	num4 = num3>0 ? num3 : num3*(-1);
	
	printf("절댓값 : %d",num4);

}*/

//3항연산자 기본