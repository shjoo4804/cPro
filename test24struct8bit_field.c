#include <stdio.h>

typedef struct test {
	char a;
	char b;
	char c;
	int su1;
	int su2;
	int su3;
	int su4;
	char d;
} Test;

typedef struct bit_test {
	char a:1; // :1bit만 할당됨 >> 그 이상을 넘어가면 증발
	char b:1;
	char c:1;
	unsigned int su1:2; // 음수가 나오지 않게 하려면 unsigned
	unsigned int su2:3;
	unsigned int su3:7;
	unsigned int su4:3;
	char d:2;
} Bit_Test;

int main(int argc, char **argv) {
	printf("struct bit field...\n");
	
	printf("sizeof(Test) : %dbyte\n", sizeof(Test));
	printf("sizeof(Bit_Test) : %dbyte\n", sizeof(Bit_Test));
	
	Bit_Test bt;
	bt.su1 = 1;
	// bt.su2 = 15; // 1111 >> 15는 크기초과.. 111까지만 할당가능 // overflow error
	bt.su2 = 7;
	// bt.su3 = 128; // 111 1111 // overflow error
	bt.su3 = 127;
	printf("%d\n", bt.su1);
	printf("%d\n", bt.su2);
	printf("%d\n", bt.su3);
	
	return 0;
} // end main
