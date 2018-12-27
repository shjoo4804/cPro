#include <stdio.h>
#include "test18functionHeader.h"

int main(int argc, char **argv)
{
	printf("function.header..\n");
	
	printf("su: %d\n", su);
	test(); // #include "test18functionHeader.h"
	
	printf("sum: %d\n", sum(100,200));
	printf("su: %d\n", su);
	
	return 0;
}

