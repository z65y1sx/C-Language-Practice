#include <stdio.h>
int main()
{
	int password = 0;
		
	do{
		printf("ÇëÊäÈëÃÜÂë£º");
		scanf("%d",&password);
		
		if(password == 12345){
			printf("ÃÜÂëÕıÈ·\n");
		}else printf("ÃÜÂë´íÎó\n");
		
	}while (password != 12345);
	
	return 0;
}
