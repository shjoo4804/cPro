#include <stdio.h>
#include <time.h>
void printLocaltime();
void printTime_now();

int main(int argc, char **argv) {
	printf("hello time_t, time now, struct tm...\n");
	
	printLocaltime();
	printTime_now();

	return 0;
} // end main()

void printLocaltime() {
	struct tm *pt_time;
	time_t time_now;
	time(&time_now);
	pt_time = localtime(&time_now);
	printf("%ld\n", time_now);
	printf("%s\n", asctime(pt_time)); //시간으로 반환
	// printf("%s\n", asctime(time_now)); // type error 
}

void printTime_now() {
	time_t time_now;
	time_now = time(NULL);
	

}
