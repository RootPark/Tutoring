#include <stdio.h>

void print2DArray(int* arr, int n);
void swap2DArray(int** arr1, int** arr2);

int main(int argc, char *argv[]) {
	int A[2][3]={1,2,3,4,5,6};
	int B[2][3]={10,20,30,40,50,60};
	
	print2DArray(*A, 6);
	print2DArray(*B, 6);
	
	swap2DArray(A, B);
	
	print2DArray(*A, 6);
	print2DArray(*B, 6);
	return 0;
}

void print2DArray(int* arr, int n){
	//printf("p%c : ",*arrName);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void swap2DArray(int** arr1, int** arr2){
	//for(int i=0;i<6;i++){
		int* temp = *arr1;
		*arr1 = *arr2;
		*arr2 = temp;
	//}
}