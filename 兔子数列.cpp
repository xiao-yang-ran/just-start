#include<stdio.h>
int main(){
	int i,n,count = 0;
	int fib[46] = {1 , 1};
	printf("请输入你要求的个数");
	scanf("%d", &n);
	if(n>=3 && n <=46){
		for(int i = 2; i <n ;i++){
			fib[i] = fib[i - 1] + fib[i - 2];
		}
		for(i = 0;i < n; i++){
			printf("%6d",fib[i]);
			count ++;
			if(count % 5 == 0){
				printf("\n");
			}
		}
		if(count != 5){
			printf("\n");
		}
	}else {
		printf("Null");
	}
	
}
