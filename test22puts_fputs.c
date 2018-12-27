#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	printf("puts.. fputs...\n");
	
	char str[10] = "KIM";
	puts(str); // KIM 출력해주는 함수

	fputs(str, stdout); // stdout:출력, stdin:입력
	fputs("\n", stdout);
	
	return 0;
}

