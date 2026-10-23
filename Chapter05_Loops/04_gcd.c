#include <stdio.h>
int main()
{
	int a,b;
	int temp;
	
	printf("请输入两个正整数：");
	scanf("%d %d",&a,&b);
	
	while (b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	
	printf("最大公约数为：%d",a);
	
	return 0;
}
