#include <stdio.h>

int main(void) {
	int num,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	
	for(i=2;i<num;i++){
		if(num%i==0){
			break;
		}
	}
	
	if(i==num){
		printf("Its Prime number\n");
	}
	else{
		printf("Its not Prime number\n");
	}
	return 0;
}

//소수판독