#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generateRandomNum(int arr[] , int length);
void print1DArrat(int arr[], int length);
void bubbleSort(int arr[], int length/*, char* sortDirectionString, int(*fp)(int,int)*/);
int ascendCompare(int a, int b);
int descendCompare(int a, int b);

int main() {
	int arr[20];
	generateRandomNum(arr, 20);
	printf("정렬 전: ");
	print1DArrat(arr, 20);
	bubbleSort(arr, 20);
	printf("\n정렬 후: ");
	print1DArrat(arr, 20);

	return 0;
}

void generateRandomNum(int arr[] , int length){
	srand(time(NULL));
	for(int i=0;i<length;i++){
		arr[i]=rand()%100+1;
	}
}
void print1DArrat(int arr[], int length){
	for(int i=0;i<length;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void bubbleSort(int arr[], int length/*, char* sortDirectionString, int(*fp)(int,int)*/){
	/*
	//내림차순
	for(int i=0;i<length;i++){
		printf("%d 단계 : ",i+1);
		for(int j=0;j<length;j++){
			if(arr[j-1]>arr[j]){
				int tmp = arr[j-1];
				arr[j-1] = arr[j];
				arr[j] = tmp;
			}
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
	*/
	//오름차순
	
	for(int i=0;i<length;i++){
		printf("%d 단계 : ",i+1);
		for(int j=0;j<=length-1;j++){
			if(arr[j]<arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
			printf("%d ",arr[j]);
		}
		printf("\n");
	}
}
int ascendCompare(int a, int b){
	if(a>b){
		return 1;
	}
	else if(a==b){
		return 0;
	}
	else{
		return -1;
	}
}
int descendCompare(int a, int b){
	if(a<b){
		return 1;
	}
	else if(a==b){
		return 0;
	}
	else{
		return -1;
	}
}