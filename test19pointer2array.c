
#include <stdio.h>
#define MAX 3

void printarr(int sus[MAX]); // 명시적으로 매개변수를 적어줌
void printarr2(int *ptsus);

int main(int argc, char **argv)
{
	printf("porint2...array...\n");
	
	int sus[MAX] = {11,22,33};
	printf("sus: %p\n",sus); // 배열의 이름은 주소값 
	printf("*sus: %d\n",*sus); 
	printf("sus[0]: %d\n",sus[0]);  //*sus와 sus[0]은 같음(주소가 가리키는 값이 같기때문)
	printf("&sus[0]: %p\n",&sus[0]); //sus와 &sus[0]은 같음(주소가 같음) 
	printf("&sus[1]: %p\n",&sus[1]); 
	printf("&sus[2]: %p\n",&sus[2]); 
	
	printf("*(sus+0): %d\n",*(sus+0)); // index 0
	printf("*(sus+1): %d\n",*(sus+1)); // index 1
	printf("*(sus+2): %d\n",*(sus+2)); // index 2
	
	//
	printf("/////////\n");
	printarr(sus);
	printarr2(sus); // 포인터변수를 매개변수로 받는 함수 
	
	
	return 0;
}

void printarr(int sus[MAX]){
	printf("printArr()...sus: %p\n",sus);
	for(int i=0; i<MAX; i++){
		printf("for..%p..%d..%d\n", &sus[i], sus[i], *(sus+i));
	}
}

void printarr2(int *ptsus){
	printf("printArr2()...sus: %p\n",ptsus);
	// sus == ptsus (주소가 같다)
	// sus[0] == ptsus[0]
	
	printf("for..pt+i..*(pt+i)..pt[i]..*pt+i\n");
	for(int i=0; i<MAX; i++){
		printf("for..%p..%d..%d..%d\n", (ptsus+i), *(ptsus+i), ptsus[i],*ptsus+i);
		// *ptsus+i ptsus[0]값에 i만큼 더한 값
	}
}
