#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{

	printf ("hello.. char...\n");	
	
	//할당:가장마지막에 null값 이들어
	char cs[] = "kim"; //String typ감e이 없기때문에 문자배열에 문자열을 넣어야함
	// 타입선언하면서 배열크기 지정가능
	printf("cs[]: %s\n",cs); //%s : string

	char cs2[8] = {'h','e','l','l','o'};
	printf("cs2[]: %s\n",cs2);
	printf("cs2.length: %d\n", strlen(cs2));
	  // strlen() : <string.h>
	  
	  
	///////문자열크기비교
	printf("strcmp(cs, cs2): %d\n", strcmp(cs, cs2));
	printf("strcmp(cs2, cs): %d\n", strcmp(cs2, cs));
	
	//////할당:해당 문자열부터 시작.. 해당문자가 없으면(null)로 출력됨
	printf("strchr(cs2,'h'): %s\n", strchr(cs2, 'h'));
	printf("strchr(cs2,'e'): %s\n", strchr(cs2, 'e'));
	printf("strchr(cs2,'u'): %s\n", strchr(cs2, 'u'));
	
	//////문자복사
	char name1[10] = "yangssem";
	char name2[10];
	
	strcpy(name2,name1);  // name2에 name1 copy
	printf("name2: %s\n", name2);
	
	
	//////병합
	strcat(name2, " is My name");
	printf("name2: %s\n", name2);
	
	
	//////토큰자르기
	printf("name2: %s\n", strtok(name2," "));
	 // strtok 뒤에 구분자 공백
	 
	 
	 
	 //////
	 char txt[10] = "abcabc";
	 printf("strstr: %s\n", strstr(txt, "b"));
	 printf("strstr: %s\n", strstr(txt, "z"));
	 
	 
	///// pointer
	char *x="aaa";
	printf("x: %s\n", x);
	
	
	
	
	return 0;
}

