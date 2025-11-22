#include<stdio.h>
int prime(long long int n){
	for(long long int i=2;i * i <= n;i++){//注意是<=不要漏掉平方数 
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long int j,N;
	scanf("%lld",&N);
	for(j=2;j<=N/2;j++){
		if(prime(j) && prime(N - j)){
			printf("%lld = %lld + %lld",N ,j ,N-j);
			return 0;
		}
	}
	
}
