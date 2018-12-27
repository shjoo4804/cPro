#include <stdio.h>
#include <time.h>
struct Student{
	char *pt_name;
	int kor;
	int eng;
	int math;
	int total;
	double avg;
};

typedef struct Member{
	int num;
	char *id;
	char *pw;
	char *name;
	char *tel;
	time_t time; // date type // #include <time.h>
} MEM;

int main(int argc, char **argv) {
	printf("struct2...\n");
	
	//struct Student st;
	typedef struct Student STD;
	STD st;
	st.pt_name = "kim";
	st.kor = 20;
	st.eng = 30;
	st.math = 40;
	st.total = st.kor + st.eng + st.math;
	st.avg = st.total/3.0;
	
	printf("st.pt_name : %s\n", st.pt_name);
	printf("st.kor : %d\n", st.kor);
	printf("st.eng : %d\n", st.eng);
	printf("st.math : %d\n", st.math);
	printf("st.total : %d\n", st.total);
	printf("st.avg : %.1lf\n", st.avg);
	printf("===========\n");
	
	struct Student st2 = {
		"yangssem", 99, 88, 77, (st2.kor+st2.eng+st2.math), st2.total/3.0 
	};
	
	printf("st2.pt_name : %s\n", st2.pt_name);
	printf("st2.kor : %d\n", st2.kor);
	printf("st2.eng : %d\n", st2.eng);
	printf("st2.math : %d\n", st2.math);
	printf("st2.total : %d\n", st2.total);
	printf("st2.avg : %.1lf\n", st2.avg);
	printf("===========\n");
	
	MEM m1,m2,m3;
	m1.num=88;
	m2.num=99;
	m3.num=77;
	printf("m1.num : %d\n", m1.num);
	printf("m2.num : %d\n", m2.num);
	printf("m3.num : %d\n", m3.num);

	struct tm *pt_time;
	time(&m1.time);
	pt_time = localtime(&m1.time);
	printf("%ld\n", m1.time);
	printf("%p\n", pt_time);
	printf("%s\n", asctime(pt_time)); //시간으로 반환
	

	return 0;
}

