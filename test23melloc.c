#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("melloc... calloc... readloc... free\n");
	// #include <stdlib.h>
	
	int arr[10];
	int *pt_arr;
	
	pt_arr = arr;
	for(int i=0; i<10; i++) {
		arr[i] = i+1;
	}
	
	// malloc : 배열 길이에 맞춰서 메모리 할당 (쓰레기 값이 나오지 않도록)
		 // java >>> int arr[] = {0,0,0,0,0};
	//pt_arr = (int*)malloc(sizeof(int)*10);
	
	// calloc : malloc과 동일한 기능 // 자주씀
	    // java >>> int arr[] = new int[5];
	pt_arr = (int*)calloc(10, sizeof(int));
	for(int i=0; i<10; i++) {
		pt_arr[i] = arr[i];
	}
	
	// realloc : update set
	pt_arr = realloc(pt_arr, sizeof(int)*5);
	
	// free : remove (메모리할당 길이 초기화?? )
	free(pt_arr); 

	
	for(int i=0; i<10; i++) { // 5번째 인덱스 이후부터는 쓰레기값이 들어감
		printf("%d  ", pt_arr[i]);
	}
	printf("\n");
	
	return 0;
}

