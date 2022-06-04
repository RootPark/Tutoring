#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 20      // 이름의 최대 길이
int usedMemory = 0;      // 힙 메모리 사용량 저장 변수

// 1. 구조체 정의
typedef struct{
    int age;
    int score;
    char* name;
}Student;

void setStudent(Student* s);

int main() {
    int n = 0;
    printf("How many students? ");
    scanf("%d", &n);

    Student* students = calloc(n,sizeof(Student));
    
    //Student* students = malloc((sizeof(int)*n));
    //memset(students,0,sizeof(int)*n);
    // 2. n 개수 만큼의 student 사이즈 메모리 할당
    // 3. 할당된 메모리를 0 으로 초기화
    usedMemory += sizeof(Student) * n;          // 할당된 메모리 크기 누계

    // 랜덤 학생 정보 저장 및 출력
    for (int i = 0; i < n; i++)
        setStudent(&students[i]);   // students+i

    // 평균 계산 및 출력
    float avg = 0;
    for (int i = 0; i < n; i++)
        avg += students[i].score;
    avg /= n;
    printf("Average score = %.2f\n", avg);

    for (int i = 0; i < n; i++)
        if (students[i].name) {     // students->name(*(students+i)).name
            free(students[i].name);
            students[i].name = NULL;
        }

    // release students
    if (students) {
        free(students);
        students = NULL;
    }

    printf("heap memory usage = %d bytes\n", usedMemory);

    return 0;
}

void setStudent(Student* s) {
    s->age = rand() % 10 + 10;  // 10 ~ 19
    s->score = rand() % 101;    // 0 ~ 100
    int nameLen = rand() % (MAX_NAME - 1) + 1;    // 1 ~ 19

    // 4. 이름을 저장할 메모리 할당
    s->name=malloc(sizeof(char)*sizeof(nameLen));
    usedMemory += sizeof(char) * nameLen + 1;           // 할당된 메모리 크기 누계

    int i;
    for (i = 0; i < nameLen; i++)           // 1 ~ 19 
        s->name[i] = 'a' + rand() % 26;     // 무작위 알파벳 저장
    s->name[i] = '\0';                      // 마지막에 널문자 추가
    printf("%d %2d %s\n", s->age, s->score, s->name);
    
}
