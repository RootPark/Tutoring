#include <stdio.h>

int main(void) {
	int num,size=0;
	
	
	scanf("%d",&num);
	int coppy=num;
	
	while(num!=0){
		num/=10;
		size++;
	}
	
	int arr[size];
	
	for(int i=0;i<size;i++){
		arr[i]=coppy%10;
		coppy/=10;
	}
	
	for(int i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}

//숫자 거꾸로