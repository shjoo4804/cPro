#include <stdio.h>
#include <wiringPi.h>
#define LED4 4 //gpio23

int main(int argc, char **argv)
{
	printf("hello gpio\n");
	
	if(wiringPiSetup()==-1) return 1;
	printf("wiringpiSetup ok...\n");
	
	int mTime = 1000;
	
	pinMode(LED4,OUTPUT); // 4번핀 OUTPUT
	
	while(1) { //roof
		digitalWrite(LED4,1);
		delay(mTime);
		
		digitalWrite(LED4,0);
		delay(mTime);
	}
	
	return 0;
}



