#include <stdio.h>

int main(void) {
	
	int snail[15][15]={0,};
	
	int num=1;
	int x=0,y=0;
	int size,sign=1;
	
	
	printf("Enter Size : ");
	scanf("%d",&size);
	
	for(int i=0;i<size;i++){
		snail[y][x]=num++;
		x+=sign;
	}
	
	x-=1;
	
	for(int i=size-1;i>0;i--){
		for(int j=0;j<i;j++){
			y+=sign;
			snail[y][x]=num++;
		}
		sign*=-1;
		for(int k=0;k<i;k++){
			x+=sign;
			snail[y][x]=num++;
		}
	}
	
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			printf("%3d ",snail[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}//달팽이 수열