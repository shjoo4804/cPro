#include <stdio.h>

int main(int argc, char **argv)
{
	printf("hello world\n");
	
	int su = 100;
	printf("int: %d\n", su);
	
	unsigned int su2 = 200;
	printf("unsigned int: %u\n", su2);
	
	//unsigned : 음수표시불가능
	
	char c = 'a';  // 2byte
	printf("char: %c\n", c);
	
	unsigned char c2 = 'a'; // 1byte
	printf("unsigned char: %u\n",c2);
	
	
	// 정수 : short, int, long
	short s1 = 32769; // 2byte
	printf("short: %d\n",s1);
	
	unsigned short s2 = 32768;
	printf("unsigned short: %u\n",s2);
	
	long lng1 = 2200000000; // 4byte
	printf("short: %ld\n",lng1); // long - %ld
	
	unsigned long lng2 = 2200000000; // 4byte
	printf("unsigned short: %lu\n",lng2); // long - %lu
	
	
	// 실수 : float, double
	float f = 3.141592f; //4byte
	printf("float: %f\n",f); 
	printf("float: %.3f\n",f); 
	// no unsigned float
	
	double d = 3.141592; //8byte
	printf("double: %lf\n",d);  // double - %lf
	printf("double: %.3lf\n",d);
	
	
	return 0;
}

