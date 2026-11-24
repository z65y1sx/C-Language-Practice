#include <stdio.h>
struct book{
	char name[20];
	float price;
};

int findmostExpensive(struct book b[],int n){
	int i;
	int max = 0;
	for(i = 0;i < n;i++){
		if(b[i].price>b[max].price){
			max = i;
		}
	}
	
	return max;
}

int main(){
	int i;
	struct book b[3];
	
	for(i = 0;i < 3;i++){
		printf("请输入书的名字和价格：");
		scanf("%s %f",&b[i].name,&b[i].price);
	}
	
	int max = findmostExpensive(b,3);
	printf("%s %.2f\n",b[max].name,b[max].price);
	
	return 0;
}
