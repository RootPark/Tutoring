#include <stdio.h>
#include <unistd.h>

int main(void) {
	int num;
	int money=0, allmoney=0;
	int menu;
	int count;
	
	printf("Welcome to Vending Machine!\n");
	
	while(1){
		printf("Pick what you want!\n1. Insert money\n2. Pick menu\n3. END\n");
		printf("Your money : %d won\n",allmoney);
		scanf("%d",&num);
		
		switch(num){
			case 1:
				printf("INSERT MONEY!\n");
				scanf("%d",&money);
				allmoney+=money;
				break;
			case 2:
				printf("PICK MENU!\n");
				printf("1. coke : 900 won \n2. sprite : 800 \n3. fanta : 700 \n4. mountaindew : 1000\n");
				scanf("%d",&menu);
				printf("How many cans?\n");
				scanf("%d",&count);
				switch (menu) {
					case 1:
						if(900*count>allmoney){
							printf("NOT ENOUGH MONEY\n");
							break;
						}
						else{
							for(int i=0;i<count;i++){
								printf("COKE!!\n");
								sleep(1);
								printf("...\n");
							}
							allmoney-=(900*count);
							break;
						}
					case 2:
						if(800*count>allmoney){
							printf("NOT ENOUGH MONEY\n");
							break;
						}
						else{
							for(int i=0;i<count;i++){
								printf("SPRITE!!\n");
								sleep(1);
								printf("...\n");
							}
							allmoney-=(800*count);
							break;
						}
					case 3:
						if(700*count>allmoney){
							printf("NOT ENOUGH MONEY\n");
							break;
						}
						else{
							for(int i=0;i<count;i++){
								printf("FANTA!!\n");
								sleep(1);
								printf("...\n");
							}
							allmoney-=(700*count);
							break;
						}
					case 4:
						if(1000*count>allmoney){
							printf("NOT ENOUGH MONEY\n");
							break;
						}
						else{
							for(int i=0;i<count;i++){
								printf("MOUNTAINDEW!!\n");
								sleep(1);
								printf("...\n");
							}
							allmoney-=(1000*count);
							break;
						}
					default:
						printf("ERROR: WRONG INPUT\n");
						return 0;
					}
						break;
			case 3:
				printf("Change : %d\n",allmoney);
				printf("END\n");
				return 0;
				break;
			default:
				printf("ERROR: WRONG INPUT\n");
				return 0;
		}
	}
}

//자판기