#include <stdio.h>
#include <wiringPi.h>
#define BUTTON 0 //gpio02

int main(int argc, char **argv)
{
	printf("hello gpio\n");
	
	if(wiringPiSetup()==-1) return 1;
	printf("wiringpiSetup ok...\n");
	
	int mTime = 1000;
	
	pinMode(BUTTON,INPUT); // BUTTON INPUT
	
	while(1) { //roof
		printf("digitalRead %d\n",digitalRead(BUTTON));
		delay(mTime);
	}
	
	return 0;
}



