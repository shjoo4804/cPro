#include <stdio.h>
#include <string.h>
struct Test {
	int x;
	double d;
	char name[10];
	char *pt_name;
};

struct Test2 {
	int x;
	double d;
};

struct Test3 {
	int x;
	double d;
} t3;

int main(int argc, char **argv)
{
	printf("struct...\n");
	
	struct Test t;
	t.x = 100;
	t.d = 3.14;
	
	//t.name = "yangssem"; // error >> strcpy로 값을 할당해줘야함
	strcpy(t.name, "yangssem"); // 값을 넣을 대상을 정확히 알아야 하므로 strcpy()사용
	
	//strcpy(t.pt_name, "yangssem2"); // >> segmentation error
	t.pt_name = "yangssem2";
	
	printf("t.x: %d\n", t.x);
	printf("t.d: %lf\n", t.d);
	printf("t.name: %s\n", t.name);
	printf("t.pt_name: %s\n", t.pt_name);
	printf("t.pt_name: %p\n", t.pt_name);
	printf("t: %d byte\n", sizeof(t));
	printf("===========\n");
		
	
	//
	struct Test2 t2; 
	t2.x = 99;
	t2.d = 9.87;
	printf("t2.x: %d\n", t2.x);
	printf("t2.d: %lf\n", t2.d);
	
	// struct변수 선언 안하고도 값 넣기 가능
	t3.x = 33; 
	t3.d = 33.33;
	printf("t3.x: %d\n", t3.x);
	printf("t3.d: %lf\n", t3.d);
	
	return 0;
}

