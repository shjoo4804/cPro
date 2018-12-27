#include <stdio.h>

int main(int argc, char **argv)
{
	printf("typedef...\n");
	
	typedef int INT;
	
	INT x = 10;
	
	printf("INT x=%d\n", x);

	unsigned int y = -999;
	printf("unsigned...%u\n",y);
	
	typedef unsigned int Uint;
	Uint y2 = -9999;
	printf("Uint...%u\n",y2);
	
	return 0;
}

