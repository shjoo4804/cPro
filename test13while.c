#include <stdio.h>

int main(int argc, char **argv)
{
		printf("while...\n");
		
		int x;
		printf("x값입력하시오.\n");
		scanf("%d", &x);
		
		while(x<10) {
			printf("while...%d\n",x);
			
			if(x != 0 && x%4==0){
				break;
			}
			else if(x > 5){
				break;
			}
			
			x++;
		}
	return 0;
}

