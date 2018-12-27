#include <stdio.h>

void test();
void test2();

int main(int argc, char **argv)
{
	printf("pointer...\n");
	
	int x=11;
	printf("x...%d\n",x);
	printf("&x...%p\n",&x); // 주소
	
	int y=x;
	printf("y...%d\n",y);
	printf("&y...%p\n",&y); // x와 주소값은 다름
	
	int *pt=NULL;
	printf("pt...%p\n",pt); // 주소없음

	int *ptx = NULL; // pointer:주소를 담는 변수
	ptx = &x;
	printf("ptx...%p\n",ptx); //주소
	printf("ptx sizeof...%d byte\n",sizeof(ptx));
	printf("*ptx...%d\n", *ptx); // 주소가 가리키는 값 x=100

	int *pta=0;
	printf("pta...%p\n",pta);
//	printf("*pta...%p\n",*pta); // error


	/////
	test(&x); // &x : 주소값을 넘김
	
	test2(&y);

	return 0;
}

void test(int *ptx){
	printf("test()....%p..%d\n",ptx,*ptx);
}

void test2(int *pty) {
	printf("test2()....%p..%d\n",pty,*pty);
}
