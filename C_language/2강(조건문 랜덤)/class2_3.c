#include <stdio.h>

int main(void) {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a>100||b>100||c>100||d>100||a<0||b<0||c<0||d<0) printf("ERROR, wrong score");

	else{
		int avr=(a+b+c+d)/4;
		printf("%d ",avr);
		
		if(avr>=90) printf("A");
		else if(avr>=80) printf("B");
		else if(avr>=70) printf("C");
		else if(avr>=60)printf("D");
		else printf("F");
		
	}
}

//평균점수 구하기




