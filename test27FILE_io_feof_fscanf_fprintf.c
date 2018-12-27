#include <stdio.h>
#define nil NULL;

int main(int argc, char **argv) {	
	printf("hello FILE io feof fscanf fprintf\n");
	
	// option // r(in:read), w(out:write), a(out:append)
	FILE *fp_read = fopen("test27su.txt","r"); // 파일 열기할 때 사용
	FILE *fp_write = fopen("test27sum.txt", "w");  // txt파일 생성하고 작성
	
	printf("%p\n", fp_read);
	
	if(fp_read == NULL) {
		printf("file not found\n");
		return 1;
	}
	
	int su1, su2;
	while(feof(fp_read)==0) {
		fscanf(fp_read, "%d %d", &su1, &su2); // file에서 읽음
		printf("%d + %d = %d\n", su1, su2, su1+su2);
		
		fprintf(fp_write, "%d + %d = %d\n", su1, su2, su1+su2); // 대상 file(fp_write)에 작성
		printf("feof(fp_read) = %d\n", feof(fp_read));
	}
	
	
	fclose(fp_read);
	fclose(fp_write);
	
	
	return 0;
} // end main
