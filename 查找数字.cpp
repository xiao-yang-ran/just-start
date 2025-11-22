#include<stdio.h>
#define MAXN 10
int main(){
	int x,n,i;
	int a[MAXN];
	printf("enter n , x:");
	scanf("%d%d",&n,&x);
	for(i = 0;i < n; i++){
		scanf("%d",&a[i]);
	}
	for(i= 0;i < n;i ++){
		if(a[i] == x){
			printf("%d", i);
		}
	}
    return 0;
		}
//这个程序一点也不好，正常的话应该再加上范围检测，寻找参数等等 
//[Error] ld returned 1 exit status这种错误很可能是程序没有关闭 
