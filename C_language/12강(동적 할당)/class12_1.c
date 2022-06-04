#include <stdio.h>
#include <stdlib.h>

int main() {
	int size;
	scanf("%d",&size);
	int* sizePtr = (int*)malloc(size*sizeof(int));
	
	if(sizePtr == NULL){
		printf("메모리 부족\n");
		exit(0);
	}
	
	for(int i=0;i<size;i++){
		printf("%d 번째 번호 : ",i);
		scanf("%d",&sizePtr[i]);
	}
	
	for(int i=0;i<size;i++){
		printf("%d\n",sizePtr[i]);
	}
	
	free(sizePtr);
}