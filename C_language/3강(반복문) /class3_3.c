#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <unistd.h>
//#include <windows.h>

int main(void) {
	srand(time(NULL));
	
	int champ;
	
	int Master_Yi_HP=450;
	int Darius_HP=500;
	
	int random;

	printf("Welcome to LOL\n");
	printf("Choose the Champion\n\t1. Master Yi : HP - 450\n\t2. Darius : HP - 500\n");
	scanf("%d",&champ);
	
	switch(champ){
		case 1:
			printf("\nYou are Master Yi\n");
			printf("\n[Skill]\nq : damage 100(1)\nw : healing 50(2)\n\n");
			
			while(1){
				printf("\nChoose Skill\n");
				int skill;
				scanf("%d",&skill);
				
				switch (skill) {
					case 1:
						printf("\nYou use q skill!\n");
						sleep(1);
						//Sleep(1000);
						printf(". . .\n");
						sleep(1);
						printf("\"Several Enemies.. and One Sword..\"\n");
						Darius_HP-=100;
						break;
					case 2:
						printf("\nYou use w skill!\n");
						sleep(1);
						//Sleep(1000);
						printf(". . .\n");
						sleep(1);
						printf("\"Mind.. and.. Body\"\n");
						Master_Yi_HP+=50;
						break;
					default:
						printf("ERROR : WRONG INPUT\n");
				}
				
				random=rand()%2+1;
				
				if(random==1){
					printf("You got 90 damage by Darius q skill!\n");
					Master_Yi_HP-=90;
				}
				else{
					printf("You got 70 damage by Darius w skill!\n");
					Master_Yi_HP-=70;
				}
				
				printf("\nYour HP : %d\n",Master_Yi_HP);
				printf("Enemy HP : %d\n",Darius_HP);
				
				if(Darius_HP<=0 && Master_Yi_HP>0){
					printf("Win!\n");
					break;
				}
				else if(Master_Yi_HP<=0 && Darius_HP>0){
					printf("Defeat!\n");
					break;
				}
				else if(Darius_HP<=0 && Master_Yi_HP<=0){
					printf("Love Shot!\n");
				}
			}
			break;
		
		
		
		
		case 2:
			printf("\nYou are Darius\n");
			printf("\n[Skill]\nq : damage 90(1)\nw : damage 70(2)\n\n");
			
			while(1){
				printf("\nChoose Skill\n");
				int skill;
				scanf("%d",&skill);
				
				switch (skill) {
					case 1:
						printf("\nYou use q skill!\n");
						sleep(1);
						//Sleep(1000);
						printf(". . .\n");
						sleep(1);
						printf("\"Die in My Hand!\"\n");
						Master_Yi_HP-=90;
						break;
					case 2:
						printf("\nYou use w skill!\n");
						sleep(1);
						//Sleep(1000);
						printf(". . .\n");
						sleep(1);
						printf("\"It Smells Bloody!\"\n");
						Master_Yi_HP-=70;
						break;
					default:
						printf("ERROR : WRONG INPUT\n");
				}
				
				random=rand()%2+1;
				
				if(random==1){
					printf("You got 100 damage by Master Yi q skill!\n");
					Darius_HP-=100;
				}
				else{
					printf("Master Yi is healing by w skill!\n");
					Master_Yi_HP+=50;
				}
				
				printf("\nYour HP : %d\n",Darius_HP);
				printf("Enemy HP : %d\n",Master_Yi_HP);
				
				if(Darius_HP>0 && Master_Yi_HP<=0){
					printf("Win!\n");
					break;
				}
				else if(Master_Yi_HP>0 && Darius_HP<=0){
					printf("Defeat!\n");
					break;
				}
				else if(Darius_HP<=0 && Master_Yi_HP<=0){
					printf("Love Shot!\n");
				}
			}
			break;
		default:
			printf("ERROR : WRONG INPUT\n");
	}
}

//롤