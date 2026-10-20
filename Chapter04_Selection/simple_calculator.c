#include <stdio.h>
int main()
{
	float a,b;
	char op;
	
	printf("请输入算是例（5 + 3）:");
	scanf("%f %c %f",&a,&op,&b);
	
	switch(op) {
		case '+':
			printf("结果为：%.2f",a + b); break;
		case '-':
			printf("结果为：%.2f",a - b); break;
		case '*':
			printf("结果为：%.2f",a * b); break;
		case '/':
			if (b==0){
				printf("错误，除法中分母不能为0！");
			} else printf("结果为：%.2f",a / b); break;
		default : printf("你还没输入算式。"); 
			 
	}
	return 0;
}
