#include <stdio.h>
#include <string.h>

typedef struct{
	char name[20];
	char num[11];
}Person;

int main(void) {
	FILE *fp;
	
	Person person[30];
	
	char search[20];
	
	int i=0;
	
	fp = fopen("test5.txt","r+");
	if(fp==NULL){
		printf("file is not exist\n");
		return 1;
	}
	else{
		printf("What number you want?\n");
		scanf("%s",search);
		while(!feof(fp)){
			fscanf(fp,"%s,%s",person[i].name,person[i].num);
			i++;
		}
		
		for(int j=0;j<30;j++){
			if(strcmp(search,person[i].name)){
				printf("%s's number is %s\n",person[i].name,person[i].num);
				return 0;
			}
			else{
				continue;
			}
			printf("There is no name like that\n");
		}
	}
}
