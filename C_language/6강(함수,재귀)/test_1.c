#include <stdio.h>

long long arr[1000];

long long fibonacci(int);

int main(void) {
	int num;
	scanf("%d",&num);
	
	for(int i=0;i<num+1;i++){
		arr[i]=-1;
	}
	
	arr[0]=1;
	arr[1]=1;
	
	for(int i=0;i<num;i++){
		printf("%lld ", fibonacci(i));
	}
}

long long fibonacci(int n){
	if(arr[n]==-1){
		arr[n]=fibonacci(n-1)+fibonacci(n-2);
	}
	return arr[n];
}

