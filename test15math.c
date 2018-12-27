#include <stdio.h>
#include <stdlib.h>
#include <math.h> // menu >> 제작(B) >> build command >> -lm 추가
#include <time.h>

int main(int argc, char **argv)
{
	printf("hello math...\n");
	
	int x=2;
	int y=8;
	printf("pow...%.2lf\n",pow(x,y)); //제곱 >> #inclue <math.h>
	
	int h=100;
	printf("sqrt...%.2lf\n",sqrt(h)); //제곱근 >> #inclue <math.h>
	printf("abs...%d\n",abs(-111)); // 절대값 >> #inclue <stdlib.h>
	
	printf("ceil -99.99...%f\n",ceil(-99.99)); //소수점 이하 버리기
	printf("ceil 99.99...%f\n",ceil(99.99));  //소수점 이하 반올림
	
	printf("floor 99.99...%f\n",floor(99.99));
	
	
	// random hamsu
	// #include <time.h>
	// #include <stdlib.h>
	srand(time(NULL)); // seed value setup 1970.01.01~  >> rand값을 매번 다르게 나오도록함
	for(int i=0; i<10; i++) {
		printf("rand %d\n", rand()%10);
	}
	
	return 0;
}

