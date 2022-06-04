#include <stdio.h>

int main(void) {
	int num1,num2,num3;
	scanf("%d",&num1);
	scanf("%d",&num2);
	scanf("%d",&num3);
	int arr[10]={0,};
	int num=num1*num2*num3;
	while(num!=0){
		arr[num%10]++;
		num/=10;
	}
	for(int i=0;i<10;i++){
		printf("%d ",i);
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}//백준 참고