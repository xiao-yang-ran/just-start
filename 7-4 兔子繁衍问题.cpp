#include<stdio.h>
int main(){
	int i , n;
	int fib[46] = {1,1};
	scanf("%d",&n);
	for(i=2;i<=45;i++){
		fib[i] = fib[i-1] + fib[i-2];
		if(n == 1){
			printf("1");
			return 0;
		}else if(fib[i] >= n && fib[i - 1] < n){
			printf("%d",i+1);
			return 0;
		}
	}
}
