#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	
	char name[20];
	char num[11];
	
	char search[20];
	
	fp = fopen("test5.txt","r+");
	if(fp==NULL){
		printf("file is not exist\n");
		return 1;
	}
	else{
		scanf("%s",search);
		while(!feof(fp)){
			fscanf(fp,"%s,%s",name,num);
			if(strcmp(search,name)){
				printf("%s",num);
				return 0;
			}
			else{
				continue;
			}
			printf("No name like that\n");
		}
	}
}

//수정필요