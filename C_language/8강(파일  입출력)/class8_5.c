#include <stdio.h>

int main(void) {
	FILE *fp;
	int num1,num2;
	
	printf("Enter 1st number: ");
	scanf("%d",&num1);
	printf("Enter 2nd number: ");
	scanf("%d",&num2);
	
	fp=fopen("test3.txt","r+");
	if(fp==NULL){
		printf("file is not exist");
		return 1;
	}
	fprintf(fp, "%d 와 %d의 사칙연산 결과.\n",num1,num2);
	fprintf(fp, "%d + %d = %d\n",num1,num2,num1+num2);
	fprintf(fp, "%d - %d = %d\n",num1,num2,num1-num2);
	fprintf(fp, "%d * %d = %d\n",num1,num2,num1*num2);
	fprintf(fp, "%d / %d = %d\n",num1,num2,num1/num2);
	
	fclose(fp);
	
	printf("Done! Check the file~\n");
	
	return 0;
	
	
	
	
}