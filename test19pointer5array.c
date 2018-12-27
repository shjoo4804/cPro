#include <stdio.h>

int main(int argc, char **argv)
{
	printf("porint5...array...\n");
	
	int sus[3]={1,2,3};
	
	//sus == &sus[0] 주소
	//*sus == sus[0] 값
	//*(sus+0) == sus[0] 값
	
	//pt+1 == pt + sizeof(*pt) 다음 배열방의 주소로 이동
	//*(pt+1) == pt[1] 값
	//pt[x] == arr[x] 값
	//pt[x][i] == arr[x][i] 값
	
	//(*pt)[COL_MAX] == arrayarray 이중배열을 주소에 넣음
	//arrayarray >> row >> arr[0] 주소는 같다 << arr[0][0]
	
	int a=10, b=20, c=30, d=40;
	printf("a=%d b=%d c=%d d=%d\n",a,b,c,d);
	printf("&a=%p &b=%p &c=%p &d=%p\n",&a,&b,&c,&d);
	
	int *ptr[4];
	ptr[0] = &a;
	ptr[1] = &b;
	ptr[2] = &c;	
	ptr[3] = &d;
	printf("ptr[0]=%p ptr[1]=%p ptr[2]=%p ptr[3]=%p\n", ptr[0], ptr[1], ptr[2], ptr[3]);
	printf("*ptr[0]=%d *ptr[1]=%d *ptr[2]=%d *ptr[3]=%d\n",*ptr[0],*ptr[1],*ptr[2],*ptr[3]);
	
	
	
	return 0;
}

