#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myStrcpy(char* dest, const char* src);

int main(void) {
	char str1[100] = "Copy one string into another string.";
	char str2[100]="";
	
	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);
	
	printf("\n*** str1를 str2에 복제 ***\n\n");
	int numberOfCharactersCopied = myStrcpy(str2, str1);
	
	printf("str1 : %s\n",str1);
	printf("str2 : %s\n",str2);
	printf("\n복제한 분자 수 : %d\n\n",numberOfCharactersCopied);
}

int myStrcpy(char* dest, const char* src){
	strcpy(dest, src);
	return strlen(src);
}