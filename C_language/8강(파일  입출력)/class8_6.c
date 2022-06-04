#include <stdio.h>

void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

int main(void) {
	FILE *fp;
	char key;
	int num1, num2;
	int c;
	
	fp = fopen("test4.txt","r+");
	if(fp==NULL){
		printf("file is not exist\n");
		return 1;
	}
	else{
		while(!feof(fp)){
			key=fgetc(fp);
			switch (key) {
				case '+':
					fscanf(fp,"%d %d",&num1,&num2);
					add(num1,num2);
					break;
				case '-':
					fscanf(fp,"%d %d",&num1,&num2);
					sub(num1,num2);
					break;
				case '*':
					fscanf(fp,"%d %d",&num1,&num2);
					mul(num1,num2);
					break;
				case '/':
					fscanf(fp,"%d %d",&num1,&num2);
					div(num1,num2);
					break;
			}
		}
	}
	
	fclose(fp);
}

void add(int num1,int num2){
	printf("[ADD]\n");
	printf("num1 : %d num2 : %d\n",num1,num2);
	printf("answer : %d\n",num1+num2);
}

void sub(int num1,int num2){
	printf("[SUB]\n");
	printf("num1 : %d num2 : %d\n",num1,num2);
	printf("answer : %d\n",num1-num2);
}

void mul(int num1,int num2){
	printf("[MUL]\n");
	printf("num1 : %d num2 : %d\n",num1,num2);
	printf("answer : %d\n",num1*num2);
}

void div(int num1,int num2){
	printf("[DIV]\n");
	printf("num1 : %d num2 : %d\n",num1,num1);
	printf("quotient : %d remainder : %d\n",num1/num2, num1%num2);
}