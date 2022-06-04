#include <stdio.h>

int main(void) {
	int money=200000;
	int num,sale;
	printf("You have %d won\n",money);
	printf("What kind of shoes you want to buy?\n");
	printf("1. Nike tailwind : 109,000 won\n2. New Balance 992 : 259,000 won\n3. Nike jordan : 119,000 won\n");
	scanf("%d",&num);
	printf("Choose coupon!\n");
	printf("10%% discount\n25%% discount\n15%% discount\n");
	scanf("%d",&sale);
	
	switch (num) {
		case 1:
			printf("Your shoes price is... %d\n",109000*(100-sale)/100);
			printf("Now you have %d won\n",money-109000*(100-sale)/100);
			break;
		case 2:
			printf("Your shoes price is... %d\n",259000*(100-sale)/100);
			
			if(259000*(100-sale)/100>money){
				printf("You don't have enough money!\n");
			}
			else{
				printf("Now you have %d won\n",money-259000*(100-sale)/100);
			}
			break;
		case 3:
			printf("Your shoes price is... %d\n",119000*(100-sale)/100);
			printf("Now you have %d won\n",money-119000*(100-sale)/100);
			break;
		default:
			printf("ERROR: Wrong Enter!");
		
	}
}

//물건사기