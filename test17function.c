#include <stdio.h>

void test(); //이름만 적어주면 됨
void test2();
int test3();
//char[] test4(); // error
char* test4(); // 문자열을 반환(return)받으려면 pointer를 사용해야 함

int main(int argc, char **argv)
{
	printf("function...\n");
	
	int x=100;
	int y=200;
	char z[]="yangssem";
	
	test(x,y,z); // test function call
	test2(20,30);
	
	printf("function.test3()...%d\n",test3());
	printf("function.test4()...%s\n",test4());
	
	return 0;
}

void test(int x, int y, char z[]){
	printf("function..test...\n");
	printf("test...x=%d, y=%d, z=%s\n",x,y,z);
	
}

void test2(int x, int y) {
	printf("function..test2...\n");
	int result = x+y;
	printf("%d+%d=%d\n",x,y,result);
}

int test3() {
	printf("test3...\n");
	return 111;
}

/*
char[] test4() {
	char name[] = "kim";
	return name;
} 
 */

char* test4() {
	char *name = "kim";
	return name;
}
