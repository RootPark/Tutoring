#include <stdio.h>

typedef struct {
	int x;
	int y;
} Point;

void swap(Point* p1, Point* p2){
	int temp = p1->x;
	p1->x = p2->x;
	p2->x = temp;
	int temp2 = p1->y;
	p1->y = p2->y;
	p2->y =temp2;
}

int main() {
	Point p1 = {10,10};
	Point p2 = {20,20};
	
	printf("p1 = (%d, %d)\n",p1.x,p1.y);
	printf("p2 = (%d, %d)\n",p2.x,p2.y);

	swap(&p1,&p2);
	
	printf("p1 = (%d, %d)\n",p1.x,p1.y);
	printf("p2 = (%d, %d)\n",p2.x,p2.y);

}