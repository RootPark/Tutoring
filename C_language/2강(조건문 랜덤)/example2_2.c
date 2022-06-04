#include <stdio.h>
#include <stdlib.h>


int main(void) {
	int num;
	int random=rand()%10+1;
	printf("Enter the number(1~10)\n");
	scanf("%d",&num);
	if(num==random){
		printf("You got it!\n");
	}
	else{
		printf("Sorry... My num is %d\n",random);
	}
	return 0;
}

//랜덤 맞추기(시간X)