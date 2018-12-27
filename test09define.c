#include <stdio.h>
#define LED 4
#define sum(a) ((a##1)+(a##2)+(a##3))
#define print(a) printf("%d * %d = %d\n", a##x, a##y, ((a##x)*(a##y)))

int main(int argc, char **argv)
{
	printf("define...\n");
	
	// LED = 3; // error
	printf("LED...%d\n",LED);
	
	
	// C macro
	int d1=10, d2=20, d3=30;
	printf("sum: %d+%d+%d=%d\n", d1, d2, d3, d1+d2+d3);
	printf("sum: %d\n", sum(d)); //sum(d) >> pattern : d가 들어있는 변수를 더하겠다
	 
	 int dx=100,dy=200;
	 print(d);
	 
	 //
	 printf("inner define __DATE__ : %s\n", __DATE__); // month day year
	 printf("inner define __TIMESTAMP__ : %s\n", __TIMESTAMP__); // year month day h m s
	 printf("inner define __TIME__ : %s\n", __TIME__); // now time(h:m)
	 printf("inner define __FILE__ : %s\n", __FILE__); // file name
	 printf("inner define __LINE__ : %d\n", __LINE__); // cording line num
	
	return 0;
}

