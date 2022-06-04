#include <stdio.h>

int fibonacci(int);

int main(void) {
	int num;
	scanf("%d",&num);
	
	for(int i=0;i<num;i++){
		printf("%d ", fibonacci(i));
	}
}

int fibonacci(int n){
	if(n==0){
		return 1;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
	
}