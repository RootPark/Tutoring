#include <stdio.h>

int main(void) {
	int a,b,c,d;
	int max;
	
	scanf("%d %d %d %d",&a,&b,&c,&d);

	max = (a>b)?a:b;
	max = (max>c)?max:c;
	max = (max>d)?max:d;
		
	printf("%d",max);

	return 0;
	
}

//3항연산자 최댓값 구하기