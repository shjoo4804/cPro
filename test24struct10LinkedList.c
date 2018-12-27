#include <stdio.h>
#include <stdlib.h>

struct list{
	int num;
	struct list *next;
};

int main(int argc, char **argv) {
	printf("struct Linked List...\n");

	struct list a={10}, b={20}, c={30}, d={40};
	printf("&a : %p\n", &a);
	printf("&b : %p\n", &b);
	printf("&c : %p\n", &c);
	printf("&c : %p\n", &d);
	
	printf("a.num : %d\n", a.num);
	printf("b.num : %d\n", b.num);
	printf("c.num : %d\n", c.num);
	printf("d.num : %d\n", d.num);
	
	a.next = &b;
	b.next = &c;
	c.next = &d;
	//d.next = &a; // 사실 의미없음
	printf("a.next : %p\n", a.next);
	printf("b.next : %p\n", b.next);
	printf("c.next : %p\n", c.next);
	//printf("d.next : %p\n", d.next);
	
	printf("a.next->num : %d\n", a.next->num); // b의 num
	printf("a.next->next->num : %d\n", a.next->next->num); 
	printf("a.next->next->next->num : %d\n", a.next->next->next->num); 
	//printf("a.next->next->next->num : %d\n", a.next->next->next->next->num); 
	printf("b.next->num : %d\n", b.next->num); 
	printf("c.next->num : %d\n", c.next->num); 
	
	
	////
	struct list *pt_head = &a; // 처음 발생시킨 노드
	while(pt_head != NULL) { // d 다음에는 할당된 주소가 없으므로, d까지 출력되고 끝남 (d주석 풀면 무한루프)
		printf("*pt_head: %d, adr: %p\n", pt_head->num, pt_head);
		pt_head = pt_head->next;
	}
	
	
	return 0;
} // end main
