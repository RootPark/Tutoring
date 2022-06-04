#include <stdio.h>
#include <string.h>

struct Person{
	char name[20];
	int age;
	char address[100];
};

int main() {
	
	struct Person p1;
	struct Person p2={"Steve",22,"seoul"};
	
	strcpy(p1.name, "park geun won");
	p1.age =23;
	strcpy(p1.address, "gwangju gwangsangu");
	
	printf("name: %s\n",p1.name);
	printf("age: %d\n",p1.age);
	printf("address: %s\n",p1.address);
	
	printf("name: %s\n",p2.name);
	printf("age: %d\n",p2.age);
	printf("address: %s\n",p2.address);
	
}