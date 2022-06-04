#include <stdio.h>

int main(void) {
	int a = 10;
	int b = 20;
	int c = 30;
	
	int* pArr1[3]={&a,&b,&c};
	
	
	for(int i=0;i<3;i++){
		printf("%d\n",*pArr1[i]);
	}
	
	
	int arr1[3]={1,2,3};
	int arr2[4]={10,20,30,40};
	int arr3[5]={100,200,300,400,500};
	int* pArr2[3]={arr1,arr2,arr3};
	printf("%lu\n",sizeof(pArr2));
	printf("%lu\n",sizeof(int*));
	int length = sizeof(pArr2)/sizeof(int*);
	int arrLen[3] = {sizeof(arr1)/sizeof(int), sizeof(arr2)/sizeof(int),sizeof(arr3)/sizeof(int)};
	
	for(int i=0;i<length;i++){
		for(int j=0;j<arrLen[i];j++){
			printf("%d ",pArr2[i][j]);
		}
		printf("\n");
	}
	
	//포인터 배열
	//포인터 배열은 포인터를 배열의 요소로 갖는 배열을 이야기 함.
	//포인터 '배열' 
	
}