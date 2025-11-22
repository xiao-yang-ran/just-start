#include<stdio.h>
int main(){
	int i,n,high,low,mid,x;
	printf("Enter n:");
	scanf("%d%d",&n,&x);
	int a[n];
	for(i = 0;i <n ;i++){
		scanf("%d",&a[i]);
	}
	low = 0;high = n - 1;
	while(low <= high){
		mid = (low + high)/2;
		if(a[mid] == x){
			printf("已找到，是第%d个数",mid+1);
			return 0;
		}else if(a[mid] < x){
			low = mid + 1;
		}else {
			high = mid - 1;
		}
	}
	printf("Not Found");
	return 0;
	
}//好像可以理解为 它们会一步步地去靠近，low和high最终会十分地接近，当二者相等时就会出现一个时机使得low+1去大于high 
