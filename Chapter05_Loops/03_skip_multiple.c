#include <stdio.h>
int main()
{
	int i;
	for(i = 1; i <= 20 ; i++){
		if (i % 2 == 0){
			continue;
		}
		printf("从1到20不是2的倍数的数有：%d\n",i);
	}
	return 0;
}
