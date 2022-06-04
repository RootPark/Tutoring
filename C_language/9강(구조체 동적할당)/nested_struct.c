#include <stdio.h>
#include <string.h>

struct highschool{
	int id;
	char name[20];
};

typedef struct {
	int id;
	char name[20];
	double percentage;
	struct highschool hs_data;
} student;

int main() {
	struct highschool h_data = {1111,"highschool"};
	student stu = {1,"park",99.5,h_data};
	printf("Id is : %d \n",stu.id);
	printf("Name is : %s\n",stu.name);
	printf("Percentage is : %1f \n\n",stu.percentage);
	printf("highschool ID is : %d \n",stu.hs_data.id);
	printf("Hightschool Nmae is : %s \n",stu.hs_data.name);
	
}