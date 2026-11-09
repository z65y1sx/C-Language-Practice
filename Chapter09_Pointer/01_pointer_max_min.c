#include <stdio.h>
int findmax(int *p,int n){
	int i;
	int max = *p;
	for(i=1;i<n;i++){
		if(*(p+i)>max){
			max = *(p+i);
		}
	}
	return max;
}
int findmin(int *p,int n){
	int i;
	int min = *p;
	for(i=1;i<n;i++){
		if(*(p+i)<min){
			min = *(p+i);
		}
	}
	return min;
}
int main(){
	int a[5] = {8,3,9,1,5};
	int *p = a;
	int fmax = findmax(a,5);
	int fmin = findmin(a,5);
	
	printf("最大值为%d,最小值为%d",fmax,fmin);
	
	return 0;
}
