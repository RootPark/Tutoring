#include <stdio.h>

int prime(int);

int main(int argc, char *argv[]) {
	int cnt=0;
	for(int i=2;i<=100;i++){
		if(prime(i)==1){
			printf("%d ",i);
			cnt++;
			if(cnt%10==0){
				printf("\n");
			}
		}
	}

}

int prime(int num){
	int count=0;
	
	for(int i=1;i<=num;i++){
		if(num%i==0){
			count++;
		}
	}
	if(count==2){
		return 1;
	}
	else{
		return 0;
	}
}