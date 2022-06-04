#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomNum(float* arr, int n);
void printArr(float* arr, int n);
float findMaxNum(float* arr, int n);

int main(){
	int n;
	float* element;
	printf("Input total number of elements(1 to 100): ");
	scanf("%d",&n);
	element = malloc(n*sizeof(float));
	
	if(element==NULL){
		printf("No memory is allocated.");
		exit(0);
	}
	
	generateRandomNum(element, n);
	printArr(element,n);
	
	printf("The largest element is : %2.1f \n\n",findMaxNum(element, n));
	return 0;
}

void generateRandomNum(float* arr, int n){
	srand((unsigned int)time(NULL));
	for(int i=0;i<n;++i){
		arr[i] = (float)rand() / RAND_MAX *100;
	}
}

void printArr(float* arr, int n){
	for(int i=0;i<n;i++){
		printf("%2.1f",arr[i]);
	}
	printf("\n");
}

float findMaxNum(float* arr, int n){
	float max=0;
	for(int i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	return max;
}