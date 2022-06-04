#include <stdio.h>

int main(void) {
	int arr[5]={1,2,3,4,5};
	int* pArr =arr;
	//pArr은 arr의 시작주소만 참조한다. 길이는 상관 없음.
	printf("%lu\n",sizeof(arr));
	printf("%lu\n",sizeof(*pArr));
	
	for(int i=0;i<sizeof(arr)/sizeof(int);i++){
		printf("%d ",pArr[i]);
	}
	printf("\n");
	//배열 포인터는 1차원에서는 별 의미가 없다.
	
	int arr2[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};
	
	int(*pArr2)[3] = arr2;
	
	for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){
		for(int j=0;j<sizeof(arr2[0])/sizeof(arr2[0][0]);j++){
			printf("%d ",pArr2[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0;i<sizeof(arr2)/sizeof(arr2[0]);i++){
		printf("%d ",*pArr2[i]);
	}
	
	
	
	//배열 포인터는 배열을 가리킬 수 있는 포인터
	//배열 '포인터' 임
	
}