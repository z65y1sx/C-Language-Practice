#include <stdio.h>
int find_max(int arr[], int n){
	int i;
	int max = arr[0];
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max = arr[i];
		}
	}
	return max;
} 
int main(){
	int a[5] = {10,20,30,40,50};
	int max_val = find_max(a,5);
	
	printf("最大值为%d",max_val);
	
	return 0;
}
