#include <stdio.h>

int main(void) {
	int a[10]={21,43,55,12,65,87,25,93,30,62};
	int* pa;
	
	for(int k=0;k<10;k++){
		printf("%3d",a[k]);
	}
	
	printf("\n\n");


	for(int k=0;k<10;k++){
		int temp;
		pa=a;
		for(int i=0;i<10-k-1;i++){
			if(*pa>*(pa+1)){
				temp=*pa;
				*pa=*(pa+1);
				*(pa+1)=temp;
			}
			pa++;
		}
	}
	
	for(int k=0;k<10;k++){
		printf("%3d",*pa++);
	}
	printf("\n\n");
	return 0;
}