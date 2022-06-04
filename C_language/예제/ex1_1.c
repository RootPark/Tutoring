#include <stdio.h>

int fac(int,int);

int main() {
	int num;
	scanf("%d",&num);
	
	for(int i=0;i<num;i++){
		for(int k=num-1;k>i;k--){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("%3d",fac(i,j));
		}
		printf("\n");
	}
	return 0;
}


int fac(int i,int j){
	if(i==0||j==0||i==j){
		return 1;
	}
	else{
		return fac(i-1,j)+fac(i-1,j-1);
	}
}