#include <stdio.h>

int main(int argc, char **argv)
{
	printf("porint3..pointer...\n");

	int x=10;
	printf("x %d\n", x);
	printf("&x %p\n", &x);
	
	int *pt = &x;
	printf("pt %p\n", pt); //주소
	printf("*pt %d\n", *pt); //값
	
	*pt = 50;
	printf("*pt %d\n", *pt);
	printf("x %d\n", x);
	
	int **ppt = &pt; // 주소의 주소
	// &pt : 포인터의 주소
	// **ppt : 값의 포인터
	// int ** : 주소의 주소를 담는 변수...타입...............
	printf("&pt %p\n", &pt); 
	printf("**ppt %p\n", ppt);
	
	**ppt = 100;
	printf("x %d\n", x);
	
	int ***pppt=&ppt;
	printf("**pppt %p\n", pppt);
	

	return 0;
}

