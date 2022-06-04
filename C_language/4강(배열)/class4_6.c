#include <stdio.h>

int main(void) {
	int num;
	scanf("%d",&num);
	int arr[num][num];
	int input=1;
	char l;
	
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			arr[i][j]=input++;
		}
	}
	
	for(int i=0;i<num;i++){
		for(int j=0;j<num;j++){
			printf("%3d ",arr[i][j]);
		}
		printf("\n");
	}
	
}//2차원 배열 채우기







