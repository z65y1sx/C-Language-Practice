#include <stdio.h>
int main(){
	int a[5] = {5,4,3,2,1};
	int *p = a;
	int i,j;
	int t = *p;
	
	for(i=0;i<5;i++)
		for(j=0;j<4-i;j++){
			if(*(p+j)>*(p+j+1)){
				t = *(p+j);
				*(p+j) = *(p+j+1);
				*(p+j+1) = t;
			}
		}
	for(i=0;i<5;i++)		
		printf("%d",*(p+i));
	
	return 0;
}
