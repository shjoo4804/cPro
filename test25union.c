#include <stdio.h>

struct Test {
	int num;
	double avg;
};

union Score {
	int num;
	double avg;
};

int main(int argc, char **argv) {	
	printf("hello union\n");

	struct Test t = {99, 33.33};
	printf("sizeof(t)_score: %d\n", sizeof(t));
	printf("t.num: %d\n", t.num);
	printf("t.avg: %lf\n", t.avg);
	
	printf("=====\n");
	
	union Score s;
	s.num = 99;
	printf("s.num: %d\n", s.num); // 값넣고 바로 출력하면 정상출력됨
	s.avg = 33.33; // 마지막에 세팅된 값만 제대로 출력됨
	printf("sizeof(s)_union: %d\n", sizeof(s));
	printf("s.num: %d\n", s.num);
	printf("s.avg: %lf\n", s.avg);
	
	printf("=====\n");
	
//	union Score s2 = {88}; // 무조건 num에 들어감
//	printf("s2.num: %d\n", s2.num);
	union Score s2 = {.avg=88.88}; // avg에 넣고싶을 때
	printf("s2.avg: %lf\n", s2.avg);
	
	printf("=====\n");
	
	struct Test t2 = {.avg=3.14};
	printf("t2.avg: %lf\n", t2.avg);
	
	
	return 0;
} // end main
