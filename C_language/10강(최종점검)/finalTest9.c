#include <stdio.h>
#include <math.h>

int reverse(int num);

int main() {
	int num;
	printf("양의 정수 입력:");
	scanf("%d",&num);
	printf("Revers of %d = %d",num,reverse(num));
}

int reverse(int num){
	if(num<0){
		return num;
	}
	return reverse(num/10)+(num%10)*pow(10,(int)(log10((double)num)));
}