#include <stdio.h>

int main(int argc, char **argv)
{
	printf("score...\n");
	// input your name, kor, eng, math
	//  >> total, avg, grade
	
	
	printf("input your name[20byte]: \n");
	char name[21];
	scanf("%20s",name);
	
	printf("input kor: \n");
	int kor;
	scanf("%d",&kor);
	
	printf("input eng: \n");
	int eng;
	scanf("%d",&eng);
	
	printf("input math: \n");
	int math;
	scanf("%d",&math);
	
	
	int total = kor+eng+math;
	double avg = total/3.0;
	char grade;
	
	if(avg>=90) {
		grade = 'A';
	}
	else if(avg>=80) {
		grade = 'B';
	}
	else if(avg>=70) {
		grade = 'C';
	}
	else {
		grade = 'F';
	}
	
	printf("=======SCORE======\n");
	printf("name: %s\n", name);
	printf("kor: %d\n", kor);
	printf("eng: %d\n", eng);
	printf("math: %d\n", math);
	printf("total: %d\n", total);
	printf("avg: %lf\n", avg);
	printf("grade: %c\n",grade);
	printf("==================\n");
	
	return 0;
}

