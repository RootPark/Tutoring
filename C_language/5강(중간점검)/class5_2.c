#include <stdio.h>

int main(void) {
	int num,line,sum;
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
	
	printf("Enter R(row) or C(column)\n");
	scanf("%s",&l);
	printf("Enter line\n");
	scanf("%d",&line);
	
	switch (l) {
		case 'R':
			for(int i=0;i<num;i++){
				sum+=arr[line][i];
			}
			break;
		case 'C':
			for(int i=0;i<num;i++){
				sum+=arr[i][line];
			}
			break;
		default :
			printf("ERROR");
	}
	
	
	printf("%d",sum);
}