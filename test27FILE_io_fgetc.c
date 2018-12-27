#include <stdio.h>
#define nil NULL;

int main(int argc, char **argv) {	
	printf("hello FILE io fgetc\n");
	
	// option // r(in:read), w(out:write), a(out:append)
	FILE *fp_read = fopen("test27.txt","r"); // 파일 열기할 때 사용
	
	printf("%p\n", fp_read);
	
	if(fp_read == NULL) {
		return 1;
	}
	
	char c = fgetc(fp_read);
	printf("%c(%d)", c, c);
	c = fgetc(fp_read);
	printf("%c(%d)", c, c);
	c = fgetc(fp_read);
	printf("%c(%d)", c, c);
	// ...
	printf("\n");
	
	while(c != 255) { // 캐릭터로 더 이상 읽어올 것이 없을 때 >> 255 // linux 255, window -1
		//printf("%c\n", c);
		c = fgetc(fp_read);
		printf("%c(%d)", c, c);
	}
	
	fclose(fp_read);
	
	
	return 0;
} // end main
