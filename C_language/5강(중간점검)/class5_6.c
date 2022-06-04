#include <stdio.h>
#include <string.h>

int main(void) {
	int n,sum;
	char arr[80];
	scanf("%d",&n);
	
	for(int i=0;i<n;i++){
		sum=0;
		scanf("%s",arr);

		
		for(int j=0;j<strlen(arr);j++){
			if(arr[j]==97){
				sum++;
			}
		}
		printf("%d\n",sum);
		
	}
	return 0;
}
//a갯수 세기
