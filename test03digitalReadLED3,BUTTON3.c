#include <stdio.h>
#include <wiringPi.h>
#define BUTTON1 0 //gpio17
#define BUTTON2 3 //gpio22
#define BUTTON3 2 //gpio11

int main(int argc, char **argv)
{
	printf("hello gpio\n");
	
	if(wiringPiSetup()==-1) return 1;
	printf("wiringpiSetup ok...\n");
	
	int mTime = 1000;
	
	pinMode(BUTTON1,INPUT); // BUTTON INPUT
	pinMode(BUTTON2,INPUT); // BUTTON INPUT
	pinMode(BUTTON3,INPUT); // BUTTON INPUT
	
	while(1) { //roof
		printf("digitalRead1: %d\n",digitalRead(BUTTON1));
		printf("digitalRead2: %d\n",digitalRead(BUTTON2));
		printf("digitalRead3: %d\n",digitalRead(BUTTON3));
		delay(mTime);
	}
	
	return 0;
}



