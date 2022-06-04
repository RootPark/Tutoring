#include <stdio.h>

int max(int n,int *input);

int main(void) {
	int n;

	
	scanf("%d",&n);
	int num[n];
	
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}

	
	printf("%d",max(n-1,num));
}

int max(int n, int *input){
	int m;
	
	if(n==0){
		return input[0];
	}
	
	m=max(n-1,input);
	
	if(m<input[n]){
		return input[n];
	}
	else{
		return m;
	}
}