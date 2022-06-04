#include <stdio.h>
#include <string.h>

int myStrlen(const char* str);

int main(void) {
	char str[100]="How many characters does this string contain?";
	printf("%s\n 문자열 길이 : %d\n",str,myStrlen(str));
	
}

int myStrlen(const char* str){
	return strlen(str);
}


