#include <stdio.h>

void printStr(char (*ptstrs)[10]);
void printStr2(char strs[3][10]);

int main(int argc, char **argv)
{
	printf("porint1...string...\n");
	
	char str[] = "yangssem";
	printf("str %s\n", str);
	printf("str %p\n", str);
	printf("str[0] %c, %p\n", str[0], &str[0]);
	printf("str[1] %c, %p\n", str[1], &str[1]);
	printf("str[2] %c, %p\n", str[2], &str[2]);
	
	////
	char strs[3][10] = {"kim", "lee", "yang"};
	// printf("strs %s\n", strs); // error
	printf("strs %p\n", strs); // strs : address
	for(int i=0; i<3; i++) {
		printf("strs[%d] %s\n", i, strs[i]);
		printf("strs[%d] %p\n", i, strs[i]);
		printf("&strs[%d][0] %p\n", i, &strs[i][0]);
	}
	
	//
	char *pt_str[3];
	pt_str[0] = &strs[0][0];
	pt_str[1] = &strs[1][0];
	pt_str[2] = &strs[2][0];
 	
	for(int i=0; i<3; i++){	
		printf("pt_str[%d] %s\n",i, pt_str[i]);
		printf("pt_str[%d] %p\n",i, pt_str[i]);
	}
	
	//
	printStr(strs);
	printStr2(strs);
	
	return 0;
}

void printStr(char (*ptstrs)[10]) { //2차원 배열은 (*pt)[COL_MAX]
	printf("printStr()...\n");
	
	printf("%p\n",ptstrs);
	
	for(int i=0; i<3; i++){	
		printf("%s\n",ptstrs[i]);
	}
}


void printStr2(char strs[3][10]){
	for(int i=0; i<3; i++) {
		printf("strs[%d] %s\n", i, strs[i]);
	}
}
