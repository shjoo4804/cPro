#include <stdio.h>
#include <wiringPi.h>
#include <string.h>
#define RLED 0 //gpio17
#define GLED 2 //gpio27
#define BLED 3 //gpio22

int main(int argc, char **argv)
{
	printf("array...\n");
	fflush(stdout);
	if(wiringPiSetup()==-1) return 1;
	printf("wiringpiSetup ok...\n");
	
	pinMode(RLED,OUTPUT); 
	pinMode(GLED,OUTPUT);
	pinMode(BLED,OUTPUT); 

	char colors[3][6] = {"red", "green", "blue"};
	
	while(1) {
		
		for (int i=0; i<sizeof(colors)/sizeof(colors[0]); i++) {
			if(strcmp(colors[i],"red")==0) {
			digitalWrite(RLED,1);
			digitalWrite(GLED,0);
			digitalWrite(BLED,0);
			printf("red");
			}
			else if(strcmp(colors[i],"green")==0) {
			digitalWrite(RLED,0);
			digitalWrite(GLED,1);
			digitalWrite(BLED,0);
			printf("green");
			}
			else if(strcmp(colors[i],"blue")==0) {
			digitalWrite(RLED,0);
			digitalWrite(GLED,0);
			digitalWrite(BLED,1);
			printf("blue");
			}
			delay(1000);
		}
		
		
	}
	return 0;
}

