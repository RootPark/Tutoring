#include <stdio.h>

int main(void) {
	int class;
	scanf("%d",&class);
	int score[class];
	for(int i=0;i<class;i++){
		scanf("%d",&score[i]);
	}
	for(int i=0;i<class;i++){
		printf("class %d grade is... ",i+1);
		if(score[i]>=90){
			printf("A\n");
		}
		else if(score[i]>=80){
			printf("B\n");
		}
		else if(score[i]>=70){
			printf("C\n");
		}
		else if(score[i]>=60){
			printf("D\n");
		}
		else{
			printf("F\n");
		}
	}
}