#include <stdio.h>

int main(int argc, char **argv)
{
		printf("switch...\n");
		
		int x;
		printf("x값입력하시오.\n");
		scanf("%d", &x);
		
		switch(x) {
			case 10:
			printf("x: %d\n",x);
			goto EXIT;
			
			case 9:
			printf("x: %d\n",x);
			break;
			
			default:
			printf("x: %d\n",x);
			break;
		}
		
		printf("break...%d\n", __LINE__);
		EXIT : printf("EXIT... %d\n", __LINE__);
		
	return 0;
}

