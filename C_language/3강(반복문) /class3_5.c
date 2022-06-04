#include <stdio.h>

#include <stdlib.h>
#include <time.h>

int main(void) {
	srand(time(NULL));
	int num=0;
	
	for(int i=0;i<6;i++){
		num=rand()%45+1;
		printf("%d ",num);
	}
}

//랜덤 중복허용 6개