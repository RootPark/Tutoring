#include <stdio.h>

int max(int,int);
int min(int,int);
void add(int,int);
void sub(int,int);
void mul(int,int);
void div(int,int);

int main(void) {
	while(1){
		int menu,num1,num2;
		printf("----Calculator----\n");
		printf("1. max 2. min 3. + 4. - 5. * 6. / 7. end\n");
		scanf("%d",&menu);
		if(menu==7){
			break;
		}
		printf("Enter num1 : ");
		scanf("%d",&num1);
		printf("Enter num2 : ");
		scanf("%d",&num2);
		switch (menu) {
			case 1:
				printf("%d\n",max(num1,num2));
				break;
			case 2:
				printf("%d\n",min(num1,num2));
				break;
			case 3:
				add(num1, num2);
				break;
			case 4:
				sub(num1, num2);
				break;
			case 5:
				mul(num1, num2);
				break;
			case 6:
				div(num1, num2);
				break;
			default:
				printf("ERROR");
				break;
		}
	}
}

int max(int a,int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}

void add(int a,int b){
	printf("%d\n",a+b);
}
void sub(int a,int b){
	printf("%d\n",a-b);
}
void mul(int a,int b){
	printf("%d\n",a*b);
}
void div(int a,int b){
	printf("quotient : %d\nremainder : %d\n",a/b,a%b);
}