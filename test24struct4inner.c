#include <stdio.h>
typedef struct contact {
	char *tel, *email, *addr;
} Contact;

typedef struct score {
	int kor;
	int eng;
	int math;
	int total;
	double avg;
} Score;

typedef struct student {
	char *name;
	Contact ctt; // struct contact
	Score s; // struct score
} Student;

int main(int argc, char **argv) {
	printf("hello struct inner...\n");
	
	Student std = { 
		"kim",
		{"010", "kim@kosta.com", "Pangyo"},
		{99, 88, 77, (std.s.kor+std.s.eng+std.s.math), (std.s.total/3.0)}
	};
	
	printf("name: %s\n", std.name);
	printf("tel: %s\n", std.ctt.tel);
	printf("email: %s\n", std.ctt.email);
	printf("addr: %s\n", std.ctt.addr);
	printf("kor: %d\n", std.s.kor);
	printf("eng: %d\n", std.s.eng);
	printf("math: %d\n", std.s.math);
	printf("total: %d\n", std.s.total);
	printf("avg: %.1lf\n", std.s.avg);
	printf("%5d%5d%5d%5d%5.1lf\n", std.s.kor, std.s.eng, std.s.math, std.s.total, std.s.avg);
	
	

} // end main
