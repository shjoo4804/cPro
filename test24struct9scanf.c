#include <stdio.h>
#include <stdlib.h>

typedef struct score {
	char *name;
	int kor;
	int eng;
	int math;
} Score;

int main(int argc, char **argv) {
	printf("struct scanf...\n");
	
	Score s;
	Score *pt_s;
	pt_s = &s;
	
	// 메모리할당을 먼저 해주고 scanf
	printf("input your name...\n");
	s.name = (char *)malloc(20); // #include <stdlib.h>
	scanf("%s", pt_s->name);
	printf("%s\n", pt_s->name);

	printf("input your kor...\n");
	scanf("%d", &pt_s->kor);
	printf("%d\n", pt_s->kor);
	
	printf("input your eng...\n");
	scanf("%d", &pt_s->eng);
	printf("%d\n", pt_s->eng);
	
	printf("input your math...\n");
	scanf("%d", &pt_s->math);
	printf("%d\n", pt_s->math);
	
	return 0;
} // end main
