#include <stdio.h>
#define ROW_MAX 2
#define COL_MAX 3

int main(int argc, char **argv)
{
	printf("porint3...arrayarray...\n");
	
	int arr[ROW_MAX][COL_MAX] = {{1,2,3,},{4,5,6}};
	printf("arr: %p\n",arr);
	
	int (*row)[COL_MAX]; // &{1,2,3},     ${4,5,6}
	int *col; //&1, &2, &3,     &4, &5, &6

	//row+0, row+1  >>  row++
	for(row=arr; row<arr+ROW_MAX; row++){
		printf("row: %p,  *row: %p,   **row: %d\n", row, *row, *(*row));
		// *row : row의 값도 주소이기때문에 주소로 출력됨 (주소배열)
		
		// col+0, col+1, col+2 >> col++, col++, col++
		for(col=*row; col<*row+COL_MAX; col++){
			//각 행의 첫번째 인덱스 값만 출력하지 않고 나머지도 출력하기 위해서 2중 배열사용
			printf("%d ", *col);
		}
		printf("\n");
	}

	return 0;
}

