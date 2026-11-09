#include <stdio.h>
int main(){
	char str[] = "hello";
	char *p = str;
	
	while(*p != '\0'){
		p++;
	}
	p--;
	
	while(p >= str){
		printf("%c",*p);
		p--;
	}
	
	return 0;
}
