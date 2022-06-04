#include <stdio.h>
#include <string.h>

typedef struct _Person{//_Person 지우고 익명 구조체로 사용 가능
	char name[20];
	int age;
	char address[100];
} Person;

int main() {
	Person p1;
	
	strcpy(p1.name, "parkgeunwon");
	p1.age=23;
	strcpy(p1.address, "gwangju");
	
	printf("name : %s\n",p1.name);
	printf("age : %d\n",p1.age);
	printf("address : %s\n",p1.address);
}