#include <stdio.h>
#define nil NULL
#define MAX 2048 // 읽어들일 파일의 MAX용량

int main(int argc, char **argv) {	
	printf("hello FILE io fgets\n");
	
	// ./test27FILE_io_fgets  < test27su.txt (Linux터미널에서 '<' 읽어들이는 기호)
	// ./test27FILE_io_fgets  < test27su.txt > test27hap.txt (결과를 test27hap.txt로 out)
	
	char data[MAX];
	int su1, su2;
	
//	printf("%p\n", fgets(data,MAX,stdin));
	
	while(fgets(data, MAX, stdin) != NULL) {
		if (sscanf(data, "%d%d", &su1, &su2) == 2) {
			printf("su1=%d , su2=%d >> %d+%d=%d\n", su1, su2, su1, su2, (su1+su2));
		}
		else { // 읽어들일 내용이 없을 때
			fprintf(stderr, "Data Error: %s\n", data);
		}
	}
	
	return 0;
} // end main
