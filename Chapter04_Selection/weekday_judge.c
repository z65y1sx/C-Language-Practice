#include <stdio.h>
int main()
{
	int day;
	printf("请输入1到7的数字：");
	scanf("%d",&day);
	if (day >=1 && day <=5){
		switch(day){
			case 1:printf("今天是星期一，工作日。"); break;
			case 2:printf("今天是星期二，工作日。"); break;
			case 3:printf("今天是星期三，工作日。"); break;
			case 4:printf("今天是星期四，工作日。"); break;
			case 5:printf("今天是星期五，工作日。"); break;
			default:printf("你还啥都没填。"); 
		}
		}else if (day == 6 || day == 7){
			printf("今天是周末，休息日。"); 
		}else {
			printf("请输入1到7的数字！");
	}
	
	return 0;
}
