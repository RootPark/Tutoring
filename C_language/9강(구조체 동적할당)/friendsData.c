#include <stdio.h>
#include <stdlib.h>

#define MAX_COUNT   5

typedef struct{
	char name[20];
	int age;
	int tall;
	int weight;
}Person;

enum menu {INSERT =1 , SHOW, EXIT} choice;

int AddFriend(Person* p, int count);
void ShowFriendList(Person* p , int count);


int main() {
	Person friends[MAX_COUNT];
	int count = 0, num;
	
	while(1){
		printf("[번호선택] 친구 추가 = 1, 친구 목록 보기 = 2, 종료 = 3 : ");
		scanf("%d",&choice);
		
		switch (choice) {
			case INSERT:
				if(AddFriend(friends, count) == 1){
					count++;
				}
				break;
			case SHOW:
				ShowFriendList(friends,count);
				break;
			case EXIT:
				exit(0);
			default:
				printf("1~3 번호만 선택할 수 있습니다!\n\n");
				break;
		}
	}
	
	return 0;
}

int AddFriend(Person* p, int count){
	if(count<MAX_COUNT){
		printf("\n새로운 친구 정보를 입력하세요\n");
		printf("1. 이름 : ");
		scanf("%s",(p+count)->name);
		printf("2. 나이 : ");
		scanf("%d",&(p+count)->age);
		printf("3. 키 : ");
		scanf("%d",&(p+count)->tall);
		printf("4. 몸무게 : ");
		scanf("%d",&(p+count)->weight);
		printf("입력을 완료했습니다. \n\n");
		return 1;
	}
	else{
		printf("최대 인원을 초과하여 입력을 할 수 없습니다. \n");
		printf("최대 %d명까지만 관리 가능합니다.\n\n",MAX_COUNT);
	}
	return 0;
}
void ShowFriendList(Person* p , int count){
	int i;
	if(count>0){
		printf("\n등록된 친구 목록\n");
		printf("     이름       나이   키     몸무게\n");
		printf("====================================\n");
		for(int i=0;i<count;i++){
			printf("     %s      %d    %d   %d\n",(p+i)->name,(p+i)->age,(p+i)->tall,(p+i)->weight);
		}
	}
	
	else{
		printf("\n등록된 친구가 없습니다.\n\n");
	}
}