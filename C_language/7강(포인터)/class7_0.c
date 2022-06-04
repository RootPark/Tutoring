#include <stdio.h>

int main(void) {
	
	int* inPtr;
	int num1 =10;
	inPtr = &num1;

	printf("%p\n", inPtr);
	
	printf("%d\n", *inPtr);
	
	printf("%lu\n",sizeof(inPtr));
	printf("%lu\n",sizeof(int*));
	printf("%lu\n",sizeof(int));
	printf("%lu\n",sizeof(num1));
	
	int arr[5]={1,2,3};
	
	int* numPtr1;
	int* numPtr2;
	int* numPtr3;
	int* numPtr4;
	int* numPtr5;
	
	numPtr1=arr;
	numPtr2=numPtr1+1;
	numPtr3=numPtr1+2;
	numPtr4=numPtr1+3;
	numPtr5=numPtr1+4;
	
	printf("%p\n",arr);
	printf("%p\n",numPtr1);
	
	printf("%p\n",&arr[0]);
	printf("%p\n",&arr[1]);
	printf("%p\n",&arr[2]);
	printf("\n");
	
	printf("%p\n",numPtr1+1);
	printf("%p\n",numPtr2);
	printf("%d\n",*numPtr1+1);
	printf("%d\n",*numPtr2);
	
	
	printf("%p\n",numPtr3);
	
	printf("%p\n",numPtr4);
	printf("%d\n",*numPtr4);
	
	printf("%p\n",numPtr5);
	printf("\n");
	
	
	
	int i=0;
	char arr2[3]="abc";
	int* Iptr=&i;
	char* Cptr=(char*)Iptr;
	char* ArrPtr=arr2;
	
	printf("%p\n",Iptr);
	printf("%p\n",Iptr+1);
	printf("%p\n",Cptr);
	printf("%p\n",Cptr+1);
	printf("%p\n",ArrPtr);
	printf("%p\n",ArrPtr+1);
	return 0;
	
	
}