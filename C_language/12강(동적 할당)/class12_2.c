#include <stdio.h>
#include <stdlib.h>

struct Data{
	char c1;
	int* numPtr;
};

int main(){
	int num = 10;
	struct Data d1 = {'A',&num};
	struct Data* d2 = (struct Data*)malloc(sizeof(struct Data));
	
	if(d2==NULL){
		return -1;
	}
	
	d2->c1='A';
	d2->numPtr = &num;
	
	printf("%d\n",*d1.numPtr);
	
	printf("%c\n",d2->c1);
	printf("%d\n",*d2->numPtr);
	
	free(d2);
	
	return 0;
}