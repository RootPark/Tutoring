#include <stdio.h>

typedef struct {
	int KOR;
	int ENG;
}score;

void allScore(score*,int,int);

int main() {
	score* student;
	int KorNum,EngNum;
	
	printf("Enter Kor score : ");
	scanf("%d",&KorNum);
	
	printf("Enter Eng score : ");
	scanf("%d",&EngNum);
	
	allScore(student,KorNum,EngNum);
	
	printf("Kor Score : %d\n",student->KOR);
	printf("Eng Score : %d\n",student->ENG);
	
}

void allScore(score* st,int KorNum,int EngNum){
	st->KOR=KorNum;
	st->ENG=EngNum;
}