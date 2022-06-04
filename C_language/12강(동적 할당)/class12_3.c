#include <stdio.h>
#include <string.h>    // strcpy 함수가 선언된 헤더 파일
#include <stdlib.h>    // malloc, free 함수가 선언된 헤더 파일

struct Person {           
    char* name;        
    int age;             
    char* address;    
};

int usedMemory = 0;      // 힙 메모리 사용량 저장 변수

int main()
{
    struct Person* p1 = malloc(sizeof(struct Person));    // 구조체 포인터 선언, 메모리 할당
    usedMemory += sizeof(struct Person);

    // 이름 저장 메모리 할당 및 저장
    p1->name = malloc(sizeof(char) * sizeof("홍길동"));
    strcpy(p1->name, "홍길동");
    usedMemory += sizeof(char) * sizeof("홍길동");

    printf("heap memory usage = %d bytes\n\n", usedMemory);
    p1->age = 30;

    // 주소 저장 메모리 할당 및 저장
    p1->address = malloc(sizeof(char) * sizeof("서울시 용산구 한남동"));
    strcpy(p1->address, "서울시 용산구 한남동");
    usedMemory += sizeof(char) * sizeof("서울시 용산구 한남동");

    // 메모리 사용량 출력
    printf("heap memory usage = %d bytes\n\n", usedMemory);

    // 화살표 연산자로 구조체 멤버에 접근하여 값 출력
    printf("이름: %s\n", p1->name);       // 홍길동
    printf("나이: %d\n", p1->age);        // 30
    printf("주소: %s\n", p1->address);    // 서울시 용산구 한남동

    // 할당된 메모리 해제
    free(p1->name);
    free(p1->address);
    free(p1);

    return 0;
}
