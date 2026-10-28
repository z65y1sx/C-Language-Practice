#include <stdio.h>
int main()
{
	int i;
	int sum,max;
	int a[5];
	
	for(i = 0; i < 5; i++){
		scanf("%d",&a[i]);
	}
	
	max = a[0];
	sum = a[0];
	
	for(i = 1; i < 5; i++){
		sum = sum + a[i];
		if (a[i] > max){
			max = a[i];
		}
	}
	printf("和为%d,最大值为%d",sum,max);
	
	return 0;
}
