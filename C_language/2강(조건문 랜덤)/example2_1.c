#include <stdio.h>

int main(void) {
	int num, a=0,b=0;
	char s;
	printf("Calculator program start!\n");
	printf("Enter what you want\n");
	printf("+ - * / \n");
	scanf("%c",&s);
	
	switch(s){
		case '+':
			printf("Enter the num (0 0)\n");
			scanf("%d %d",&a,&b);
			printf("Answer: %d\n",a+b);
			break;
		case '-':
			printf("Enter the num (0 0)\n");
			scanf("%d %d",&a,&b);
			printf("Answer: %d\n",a-b);
			break;
		case '*':
			printf("Enter the num (0 0)\n");
			scanf("%d %d",&a,&b);
			printf("Answer: %d\n",a*b);
			break;
		case '/':
			printf("Enter the num (0 0)\n");
			scanf("%d %d",&a,&b);
			if(a==0 || b==0){
				printf("ERROR: Not allow 0\n");
				return 0;
			}
			printf("Quotient: %d\n",a/b);
			printf("Remainder: %d\n",a%b);
			break;
		default:
			printf("ERROR: Enter right sign\n");

	}
	return 0;
}

//계산기