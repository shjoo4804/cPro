#include <stdio.h>

int su=0;
static int su2=44;
const int su3=88;

int main(int argc, char **argv)
{
	printf("variable...\n");
	// su3=55; // readonly error
	
	su=11;
	printf("su: %d\n", su);
	
	printf("su2: %d\n", su2);
	
	static int num=99; // local static
	printf("local static num: %d\n", num);
	
	if(1) {
			auto int su=333; // in block{}... default:auto 
			printf("local su: %d\n", su);
	}

	printf("global su: %d\n", su); // global var. su
	
	/////
	register int total=100; // CPU Speed up
	printf("total: %d\n",total);
	
	volatile int total2=1000; // Memory Speed up
	printf("total: %d\n",total2);
	
	return 0;
}

