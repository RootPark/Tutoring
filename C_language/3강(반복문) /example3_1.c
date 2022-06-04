#include <stdio.h>

int main(void) {
	int money;
	int allmoney=0;
	int interest=0;
	int allinterest=0;
	
	printf("KAKAO 26 weeks Savings!\n");
	printf("How much you want to save?\n");
	scanf("%d",&money);
	
	for(int i=1;i<27;i++){
		allmoney+=(money*i);
		if(i%4==0){
			interest=allmoney*0.0011;
			allinterest+=interest;
			allmoney+=interest;
			printf("\n%d week!\nSave money : %d won\nAll money : %d won\n",i,money*i,allmoney);
			printf("Interest Income! : %d won\n",interest);
		}
		else{
			printf("\n%d week!\nSave money : %d won\nAll money : %d won\n",i,money*i,allmoney);
		}
		
	}
	printf("----------------------------\n");
	printf("Your Saving is done!\n");
	printf("Your principal is %d won\n",allmoney-allinterest);
	printf("Your interest is %d won\n",allinterest);
	printf("Your money is %d won\n",allmoney);
	printf("----------------------------");
}

//26주 적금
