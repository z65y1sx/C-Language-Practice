#include <stdio.h>
int main(){
	char str[] = "a1b2c3d4";
	char *p = str;
	int count = 0;
	 
	while(*p != '\0'){
		if(*p>='0' && *p<='9'){
			count++;
		}
		p++;
	}
	
	printf("数字字符的个数为%d",count);
	
	return 0;
}
