#include <stdio.h>
int factorial(int n){
	int sum = 1;
	int i; 
	for(i = 1;i <= n;i++){
		sum = sum * i;
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	int sum = factorial(n);
	printf("%d",sum);
	
	return 0;
}
