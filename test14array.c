#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	printf("array...\n");
	
	int sus[] = {1,2,3,4,5};
	
	printf("sus[0] %d\n", sus[0]);
	printf("sus[1] %d\n", sus[1]);
	printf("sus[2] %d\n", sus[2]);
	printf("sus[3] %d\n", sus[3]);
	printf("sus[4] %d\n", sus[4]);
	
	for(int i=0; i<sizeof(sus)/sizeof(int); i++) {
		printf("sus[%d] %d\n", i, sus[i]);
	}
	
	
	//mission
	int suss[2][3] = {{1,2,3},{4,5,6}};
	printf("sizeof(int):%d\n", sizeof(int)); // 4
	printf("sizeof(suss):%d\n", sizeof(suss)); // 24
	printf("sizeof(suss)[0]:%d\n", sizeof(suss[0])); // 12
	
	// 0,0   0,1   0,2
	// 1,0   1,1   1,2
	
	for(int x=0; x<sizeof(suss)/sizeof(suss[0]); x++) {		
		for (int i=0; i<sizeof(suss[0])/sizeof(int); i++) {
			
			printf("suss[%d][%d]:%d   ", x, i, suss[x][i]);
			
		}
		printf("\n");
	}
	
	//
	char names[3][10] = {"yangssem1", "yangssem2", "yangssem3"};
	printf("%d\n", sizeof(names));
	printf("%d\n", sizeof(names[0]));
	
	for(int i=0; i < sizeof(names)/sizeof(names[0]); i++) {
		printf("%s\n",names[i]);
	}
	
	
	//
	bool bs[3] = {true,false,true}; // true1, false0
	printf("bs sizeof %d\n", sizeof(bs));
	for(int i=0; i<sizeof(bs); i++) {
		printf("bs[%d]: %d\n", i, bs[i]);
	}
	
	return 0;
}

