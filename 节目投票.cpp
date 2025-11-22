#include<stdio.h>
#define MAXN 8
int main(){
	int i,n,p;
	int count[MAXN + 1];
	printf("请输入你想要投票的总数");
	scanf("%d",&n);
	for(i = 1;i <= MAXN;i++){
		count[i] = 0;
	}
	for(i = 1;i <= n;i++){
		scanf("%d",&p);
		count[p] ++;
	}
	for(i = 1;i <= MAXN;i++){
		printf("count[%d] = %d\n",i,count[i]);
	}
	
}
//n,i,MAXN,count,
