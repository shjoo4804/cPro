#include <stdio.h>
#define ROW_MAX 2
#define COL_MAX 3

int main(int argc, char **argv)
{
	printf("porint3...arrayarray...\n");
	
	int arr[ROW_MAX][COL_MAX] = {{1,2,3,},{4,5,6}};
	printf("arr: %p\n",arr);
	
	int (*pt)[COL_MAX] = arr; //arr[ROW_MAX]를 포인터인 pt로 받음
	// &{1,2,3}, &{4,5,6} 즉, 두 배열의 주소를 갖는 포인터배열
	printf("pt: %p\n",pt);
	//pt[0] == arr[0]
	//pt[0][0] == arr[0][0]	

	for(int x=0; x<ROW_MAX; x++) {
		for(int i=0; i<COL_MAX; i++) {
			printf("%d ", pt[x][i]);
		}
		printf("\n");
	}

	return 0;
}

