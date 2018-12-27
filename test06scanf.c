#include <stdio.h>

int main(int argc, char **argv)
{
	// 값받아오기 :: scanf
	printf("hello scanf....\n");
	
	
	printf("input your name[200 byte]: \n");
	char name[201];
	scanf("%200s",name);
	printf("name: %s\n",name);
	
	//
	int su = 100;
	printf("input your su: \n");
	scanf("%d",&su);
	printf("su : %d\n",su);
	
	int age = 100;
	printf("input your age: \n");
	scanf("%d",&age);
	printf("age : %d\n",age);
	printf("&age : %p\n",&age);
	
	double avg;
	printf("input your avg: \n");
	scanf("%lf", &avg);
	printf("&avg : %p \n",&avg);
	printf("avg : %.2lf \n",avg);
	
	
	//주소값: 0x7ee38e24 >> 0x 16진수
	//00000000~ffffffff 범위 >> 32bit memory system
	
	return 0;
}

