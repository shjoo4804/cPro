#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#define RLED 0 //gpio17
#define GLED 2 //gpio27
#define BLED 3 //gpio22

int main(int argc, char **argv)
{
	printf("scanf LED color\n");
	fflush(stdout);
	if(wiringPiSetup()==-1) return 1;
	printf("wiringpiSetup ok...\n");
	
	pinMode(RLED,OUTPUT); 
	pinMode(GLED,OUTPUT);
	pinMode(BLED,OUTPUT); 

	char input[10];
	printf("input LED color:\n");
	scanf("%s",input);
	
	
	if(strcmp(input,"red")==0) {
		digitalWrite(RLED,1);
		digitalWrite(GLED,0);
		digitalWrite(BLED,0);
	} 
	else if(strcmp(input,"green")==0) {
		digitalWrite(RLED,0);
		digitalWrite(GLED,1);
		digitalWrite(BLED,0);
	}
	else if(strcmp(input,"blue")==0) {
		digitalWrite(RLED,0);
		digitalWrite(GLED,0);
		digitalWrite(BLED,1);
	}
	else if(strcmp(input,"on")==0) {
		digitalWrite(RLED,1);
		digitalWrite(GLED,1);
		digitalWrite(BLED,1);
	}
	else {
		digitalWrite(RLED,0);
		digitalWrite(GLED,0);
		digitalWrite(BLED,0);
	}

	return 0;
}



