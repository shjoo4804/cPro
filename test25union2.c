#include <stdio.h>

typedef union names {
	char a_name[10];
	char b_name[12];
	char c_name[14];
	char c_name2[16]; // 8byte * 2
	char c_name3[18]; // 8byte * 3
	double d_name; // 8byte
} u_names;

int main(int argc, char **argv) {	
	printf("hello union2\n");

	u_names un;
	printf("sizeof(un): %d\n", sizeof(un)); // 8byte * 3
	
	return 0;
} // end main
