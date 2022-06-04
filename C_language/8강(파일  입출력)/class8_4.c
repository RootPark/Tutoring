#include <stdio.h>

int main() {
	FILE *fp;
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	
	fp =fopen("test2.txt", "r+");
	if(fp==NULL){
		printf("file is not exist");
		return 1;
	}
	fprintf(fp,"Example file\n");
	fprintf(fp,"Number that enter is %d",num);
	
	fclose(fp);
	
	printf("Done! Check the file~\n");
	
	return 0;
	
}