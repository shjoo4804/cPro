#include <stdio.h>

int main(int argc, char **argv)
{
	printf("porint5...array...\n");
	
	//sus == &sus[0] 주소
	//*sus == sus[0] 값
	//*(sus+0) == sus[0] 값
	
	//pt+1 == pt + sizeof(*pt) 다음 배열방의 주소로 이동
	//*(pt+1) == pt[1] 값
	//pt[x] == arr[x] 값
	//pt[x][i] == arr[x][i] 값
	
	//(*pt)[COL_MAX] == arrayarray 이중배열을 주소에 넣음
	//arrayarray >> row >> arr[0] 주소는 같다 << arr[0][0]
	
	int arr[4] = {10,20,30,40};
	
	int *ptr[4]; // arr 각 인덱스의 주소를 넣을 배열
	//ptr[0] = &arr[0]
	int i;
	for(i=0; i<4; i++) {
		ptr[i] = &arr[i];
		printf("%d \n", *ptr[i]);
	}
	
	
	return 0;
}

