#include <stdio.h>

enum Car {
	Ray, Sonata, Santafe, Volvo, oooo, BMW
};

const int a = 10;
const int b = 20;
const int c = 30;

int main(int argc, char **argv) {	
	printf("hello enum\n");
	
	//printf("sizeof(car): %d\n", sizeof(car)); // error // 변수타입에 의미가 없기 때문
	printf("Ray: %d\n", Ray);
	printf("Sonata: %d\n", Sonata);
	printf("Santafe: %d\n", Santafe);
	printf("Volvo: %d\n", Volvo);
	printf("oooo: %d\n", oooo);
	printf("BMW: %d\n", BMW);
	
	enum Car c;
	printf("sizeof(c): %dbyte\n", sizeof(c));
	c = Volvo;
	switch(c) {
		case Ray:
			printf("Your car code : %d\n", c);
			break;
		case Sonata:
			printf("Your car code : %d\n", c);
			break;
		case Santafe:
			printf("Your car code : %d\n", c);
			break;
		case Volvo:
			printf("Your car code : %d\n", c);
			break;
		case oooo:
			printf("Your car code : %d\n", c);
			break;
		case BMW:
			printf("Your car code : %d\n", c);
			break;
		default:
			printf("other\n");
			break;
	}
	
	return 0;
} // end main
