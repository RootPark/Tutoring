#include <stdio.h>

int fac(int);

int main(void){
	int num;
	scanf("%d",&num);
	printf("%d",fac(num));
}

int fac(int a){
	if(a<=1){
		return 1;
	}
	return a*fac(a-1);
}