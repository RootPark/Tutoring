#include <stdio.h>
int main(void) {
	int num,count=0;
	scanf("%d",&num);
	int rNum=num;
	do{
		num=((num%10)*10)+(num/10+num%10)%10;
		count++;
	}while(rNum!=num);
	printf("%d",count);
	return 0;
}

//더하기 사이클