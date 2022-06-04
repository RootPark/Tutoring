#include <stdio.h>
#define INT_MAX 2147483648

int main(void) {
	int lange,index;
	
	printf("Enter how long\n");
	scanf("%d",&lange);
	
	int arr[lange];
	
	printf("Enter %d num\n",lange);
	for(int i=0;i<lange;i++){
		scanf("%d",&arr[i]);
	}
	

	
	
	printf("Enter index of number\n");
	scanf("%d",&index);
	printf("%d",arr[index]);
}