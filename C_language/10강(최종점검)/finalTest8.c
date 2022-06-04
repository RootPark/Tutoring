#include <stdio.h>

int factorial(int n);
int permutation(int n, int r);

int main() {
	int n, r;
	printf("n과 r 입력: ");
	scanf("%d %d",&n,&r);
	printf("P(%d, %d) = %d\n",n,r,factorial(n)/factorial(n-r));
	printf("C(%d, %d) = %d",n,r,permutation(n,r)/factorial(r));
	
}
int permutation(int n, int r){
	return factorial(n)/factorial(n-r);
}
int factorial(int n){
	int temp =1;
	int i;
	for(i=1;i<=n;i++){
		temp*=i;
	}
	return temp;
}

