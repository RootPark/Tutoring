#include <stdio.h>

typedef struct{
	int KOR;
	int MAT;
	int ENG;
	int SCI;
}score;

int main() {
	score student[3];
	
	for(int i=1;i<=3;i++){
		printf("%d student score\n",i);
		printf("KOR : ");
		scanf("%d",&student[i-1].KOR);
		printf("MAT : ");
		scanf("%d",&student[i-1].MAT);
		printf("ENG : ");
		scanf("%d",&student[i-1].ENG);
		printf("SCI : ");
		scanf("%d",&student[i-1].SCI);
		
	}
	
	for(int i=1;i<=3;i++){
		printf("%d student score\n",i);
		printf("KOR : %d\n",student[i-1].KOR);
		printf("MAT : %d\n",student[i-1].MAT);
		printf("ENG : %d\n",student[i-1].ENG);
		printf("SCI : %d\n",student[i-1].SCI);
	}
}