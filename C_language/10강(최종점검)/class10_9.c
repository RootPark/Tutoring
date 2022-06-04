#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int countWords(char* str);

int main(void) {
	char str[100];
	
	printf("문자열의 단어 숫자 세기\n");
	printf("-------------------------------------\n");
	printf("문자열 입력 : ");
	fgets(str,sizeof(str),stdin);
	printf("총 단어 개수 : %d\n",countWord(str));

}

int countWord(char* str){
	int count=0;
	char *strPtr = strtok(str," ");
	while(strPtr!=NULL){
		count++;
		strPtr=strtok(NULL," ");
	}
	
	return count;
}