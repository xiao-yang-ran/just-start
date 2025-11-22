#include<stdio.h>
#define MAXN 10
int main(){
	int n,i,index = 0,temp;
	int a[MAXN];
	printf("请输入元素个数n\n");
	scanf("%d",&n);
	if( n >= 2 && n<=10){
		printf("请输入%d个元素\n",n);
		for( i = 0; i< n;i++){
			scanf("%d",&a[i]);
		}
	}else{
		printf("NULL");
		return 0;
	}
	for(i = 1; i<n; i++){
		if(a[index] > a[i]){
			index = i;
		}
	}
	printf("最小值为%d",a[index]);
	return 0;
}
