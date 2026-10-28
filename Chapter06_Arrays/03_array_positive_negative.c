#include <stdio.h>
int main()
{
	int a[5],i,pos = 0,neg = 0;
	for(i = 0 ;i < 5 ;i++){
		scanf("%d",&a[i]);
	}
	for(i = 0 ;i < 5 ;i++){
		if(a[i] < 0){
			neg++;
		} else if(a[i] > 0){
			pos++;
		}
	}
	printf("正数有%d个，负数有%d个。",pos,neg);
	
	return 0;
}
