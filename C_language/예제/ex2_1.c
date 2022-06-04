#include <stdio.h>

void fun(char *s){
	int i,j;
	
	for(i=0,j=0;s[i]!='\0';i++,j++){
		if(s[i]>=48 && s[i]<=57){
			s[j]=s[i];
		}
		else{
			j--;
		}
	}
	s[j]='\0';
}

int main() {
	char item[80];
	printf("\nEnter a string :");
	scanf("%s",item);
	printf("\n\nThe string is :%s\n",item);
	fun(item);
	printf("\n\nThe string of changing is : %s\n",item);
	return 0;
}