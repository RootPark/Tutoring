#include <stdio.h>

int main(void) {
	
	int data1[5]={1,2,3,4,5};
	
	int data2[5]={0,};
	
	int data3[5]={1,2,0};
	
	int data4[5];
	
	char data5[5]="";
	
	char data6[20]={'a','b','c',0};
	
	char data7[20]="program";
	//int data8[200]={2,};
	
	//memcpy(data7,"program",7);
	
	for(int i=0;i<5;i++){
		data4[i]=i;
	}
	
	for(int i=0;i<5;i++){
		printf("%d ",data4[i]);
	}
}