#include <stdio.h>

int main(void) {
	int score[10][2];
	char class[10][20];
	int index;
	
	printf("How many classes you have?\n");
	scanf("%d",&index);
	
	for(int i=0;i<index;i++){
		score[i][1]=1;
	}
	
	for(int i=0;i<index;i++){
		printf("Enter %d class name : ",i+1);
		scanf("%s",class[i]);
	}
	
	for(int i=0;i<index;i++){
		printf("What is your %s class score?\n",class[i]);
		scanf("%d",&score[i][0]);
	}
	
	for(int i=0;i<index;i++){
		for(int j=0;j<index;j++){
			if(score[i][0]<score[j][0]){
				score[i][1]++;
			}
		}
	}

	printf("-----chart-----\n");
	for(int i=1;i<=index;i++){
		for(int j=0;j<index;j++){
			if(score[j][1]==i){
				printf("%d : %s ",i,class[j]);
				if(score[j][0]>=90){
					printf("A\n");
				}
				else if(score[j][0]>=80){
					printf("B\n");
				}
				else if(score[j][0]>=70){
					printf("C\n");
				}
				else if(score[j][0]>=60){
					printf("D\n");
				}
				else {
					printf("F\n");
				}
			}
		}
	}
}