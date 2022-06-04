#include <stdio.h>

int main(void) {
	char c;
	int money=5000;
	int calcu;
	printf("You have %d won\nDeposit? Withdraw?(D, W)\n",money);
	scanf("%c",&c);
	switch(c){
		case 'D':
			printf("How much?\n");
			scanf("%d",&calcu);
			printf("Now you have %d\n",money+calcu);
			break;
		case 'W':
			printf("How much?\n");
			scanf("%d",&calcu);
			if(calcu>money){
				printf("You don't have that much money!\n");
			}
			else{
				printf("Now you have %d\n",money-calcu);
			}
			break;
		default:
			printf("Wrong input!\n");
	}
	
	
}
//입출금 