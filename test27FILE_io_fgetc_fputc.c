#include <stdio.h>
#define nil NULL;

int main(int argc, char **argv) {	
	printf("hello FILE io fgetc fputc\n");
	
	// option // r(in:read), w(out:write), a(out:append)
	FILE *fp_read = fopen("test27.txt","r"); // 파일 열기할 때 사용
	FILE *fp_write = fopen("test27write.txt", "w");  // txt파일 생성하고 작성
	
	printf("%p\n", fp_read);
	
	if(fp_read == NULL) {
		printf("file not found\n");
		return 1;
	}
	
	char c = fgetc(fp_read);
	while(c != 255) { 
		printf("%c\n", c);
		fputc(c, fp_write);
		c = fgetc(fp_read);
	}
	
	
	fclose(fp_read);
	fclose(fp_write);
	
	
	return 0;
} // end main
