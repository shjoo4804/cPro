#include <stdio.h>

int main(int argc, char **argv)
{
	printf("porint2...string...\n");

/*
	char name[10] = "kim";
	char strs[3][10] = {name, "lee", "yangssem"};
	char *name2 = "kim";
	char *pt_str[3] = {name2, "lee", "yangssem"};
*/

	char *pt_str[3] = {"kim", "lee", "yangssem"};
	for(int i=0; i<3; i++){
		printf("%s \n", pt_str[i]);
	}

	char strs[3][10] = {"kim", "lee", "yangssem"};
	for(int i=0; i<3; i++){
		printf("%s \n", strs[i]);
	}
	
	return 0;
}

