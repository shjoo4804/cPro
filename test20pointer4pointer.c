#include <stdio.h>

void test(int *pt);
void test2(int **ppt);

int main(int argc, char **argv)
{
	printf("porint4..pointer...\n");

	int arrs[2][3] = {{1,2,3},{4,5,6}};
	
	int (*row)[3] = arrs;
	printf("row %p\n", row);

	int *pt = (int *)arrs;
	printf("pt %p\n",pt);
	test((int *)arrs); 

//	printf("======%d\n ", pt[1]);
//	printf("======%d\n ", *(pt+1));
	
	int **ppt = (int **)arrs;
	printf("ppt %p\n",ppt);
	test2((int**)arrs);

	return 0;
}

void test(int *pt) {
	
}

void test2(int **ppt) {
	
}
