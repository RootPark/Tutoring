#include <stdio.h>

int main() {
	FILE *fp;
	fp = fopen("test1.txt", "r+");
	char c;
	int str;
	
	if(fp==NULL){
		printf("file is not exist\n");
		return 1;
	}
	else{
		printf("file can be open\nDo you want to open?(o,n)\n");
		
		scanf("%c",&c);
		if(c=='o'){
			while((str=fgetc(fp))!=EOF){
				putchar(str);
			}
		}
	}
	fclose(fp);
	return 0;
	
}