#include <stdio.h>

int sumOfArray(int* p, int length);

int main() {
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int arr_length = sizeof(arr)/sizeof(int);
	
	printf("%d\n",sumOfArray(arr, arr_length));
	
	return 0;
}

int sumOfArray(int* p, int length){
	int sum=0;
	for(int i=0;i<length;i++){
		sum+=*p+(i);
	}
	return sum;
}