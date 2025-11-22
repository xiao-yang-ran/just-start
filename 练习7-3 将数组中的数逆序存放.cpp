#include<stdio.h>
int main(){
	int n,a[10],flag = 1;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0,j=n-1;i<j;i++,j--){
		a[i] ^= a[j] ^= a[i] ^= a[j];
	}
	for(int i= 0;i<n;i++){
		if(flag){
			printf("%d",a[i]);
			flag = 0;
		}else{
			printf(" %d",a[i]);
		}
	}
	return 0;
}
