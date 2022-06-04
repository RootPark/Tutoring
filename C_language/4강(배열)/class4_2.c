#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
	srand(time(NULL));
	int lotto[6];
	for(int i=0;i<6;i++){
		lotto[i]=rand()%45+1;
		for(int j=0;j<i;j++){
			if(lotto[i]==lotto[j]){
				i--;
				break;
			}
		}
	}
	
	for(int i=0;i<6;i++){
		for(int j=0;j<6-1;j++){
			if(lotto[j]>lotto[j+1]){
				int tmp=lotto[j];
				lotto[j]=lotto[j+1];
				lotto[j+1]=tmp;
			}
		}
	}
	
	for(int i=0;i<6;i++){
		printf("%d ",lotto[i]);
	}
}//로또 내림차순