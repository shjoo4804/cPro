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
	
	Contact ctt1 = {"02", "aaa@aaa.com", "seoul"};
	Contact ctt2 = {"031", "bbb@bbb.com", "busan"};
	Contact cs[2] = {ctt1, ctt2}; // 구조체 배열
	
	printf("======contact array\n");
	for(int i=0; i<2; i++) {
		printf("%s %s %s\n", cs[i].tel, cs[i].email, cs[i].addr);
	}
	
	//
	Score sc1 = {100, 90, 80, (sc1.kor+sc1.eng+sc1.math), (sc1.total/3.0)};
	Score sc2 = {99, 88, 77, (sc2.kor+sc2.eng+sc2.math), (sc2.total/3.0)};
	Score scs[2] = {sc1, sc2};
	printf("======score array\n");
	for(int i=0; i<2; i++) {
		printf("%d %d %d %d %.1lf\n", scs[i].kor, scs[i].eng, scs[i].math, scs[i].total, scs[i].avg);
	}
	
	//
	Student std1 = {"kim", ctt1, sc1};
	Student std2 = {"lee", ctt2, sc2};
	Student std[2] = {std1, std2};
	printf("======student array\n");

	for(int i=0; i<2; i++) {
		printf("%s\n", std[i].name);
		printf("%s %s %s\n", std[i].ctt.tel, std[i].ctt.email, std[i].ctt.addr);
		printf("%d %d %d %d %.1lf\n", std[i].s.kor, std[i].s.eng, std[i].s.math, std[i].s.total, std[i].s.avg);
		printf("----------\n");
		}

} // end main
