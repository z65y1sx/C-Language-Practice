#include <stdio.h>
int main()
{	int sum = 0;
	int odd; 
	for (odd = 1; odd <= 100; odd++){
		if(odd % 2 != 0){
		sum = sum +odd;	
		}
	} 
	printf("1到100的奇数和为%d",sum);
	
	return 0;
}
