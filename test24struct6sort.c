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
	printf("sort...\n");
	
	Contact ctt1 = {"02", "aaa@aaa.com", "seoul"};
	Contact ctt2 = {"051", "bbb@bbb.com", "busan"};
	Contact ctt3 = {"031", "ccc@ccc.com", "bundang"};
	Contact cs[3] = {ctt1, ctt2, ctt3}; // 구조체 배열
	
	printf("======contact array\n");
	for(int i=0; i<3; i++) {
		printf("%s %s %s\n", cs[i].tel, cs[i].email, cs[i].addr);
	}
	
	//
	Score sc1 = {100, 90, 80, (sc1.kor+sc1.eng+sc1.math), (sc1.total/3.0)};
	Score sc2 = {11, 22, 33, (sc2.kor+sc2.eng+sc2.math), (sc2.total/3.0)};
	Score sc3 = {44, 55, 66, (sc3.kor+sc3.eng+sc3.math), (sc3.total/3.0)};
	Score scs[3] = {sc1, sc2, sc3};
	printf("======score array\n");
	for(int i=0; i<3; i++) {
		printf("%d %d %d %d %.1lf\n", scs[i].kor, scs[i].eng, scs[i].math, scs[i].total, scs[i].avg);
	}
	
	//
	Student std1 = {"kim1", ctt1, sc1};
	Student std2 = {"kim2", ctt2, sc2};
	Student std3 = {"kim3", ctt3, sc3};
	Student std[3] = {std1, std2, std3};
	printf("======student array\n");

	for(int i=0; i<3; i++) {
		printf("%s\n", std[i].name);
		printf("%s %s %s\n", std[i].ctt.tel, std[i].ctt.email, std[i].ctt.addr);
		printf("%d %d %d %d %.1lf\n", std[i].s.kor, std[i].s.eng, std[i].s.math, std[i].s.total, std[i].s.avg);
		printf("----------\n");
	}

	// 오름차순 정렬 
	for(int x=0; x<3; x++){
		for(int i=x+1; i<3; i++) {
			if(std[x].s.total > std[i].s.total) {
				Student std_tmp; // pointer로도 임시저장가능
				std_tmp = std[x];
				std[x] = std[i];
				std[i] = std_tmp;
			}
		}
	}
	
	// 내림차순 정렬 
	for(int x=0; x<3; x++){
		for(int i=x+1; i<3; i++) {
			if(std[x].s.total < std[i].s.total) {
				Student std_tmp;
				std_tmp = std[x];
				std[x] = std[i];
				std[i] = std_tmp;
			}
		}
	}
	
	for(int i=0; i<3; i++) {
		printf("%d\n", std[i].s.total);
	}
	
	
	// 정렬
	

} // end main
