#include<stdio.h>
int pr(int n){
	int flag = 1;
	if(n <= 1){
		return 0;
	}
	if(n==2){
		return 1;
	}
	for(int i=2;i * i <= n;i++){
		if(n % i == 0){
			flag = 0;
		}
	}
	return flag;
}
int main(){
	int N,p,q;
	scanf("%d",&N);
	p=2;q=N-p;
	if(pr(q)){
		printf("%d = %d + %d",N,p,q);
		return 0;
	}
	for(p++;p<=N/2;p += 2){
		q = N-p;
		if(pr(p) && pr(q)){
			printf("%d = %d + %d",N,p,q);
			return 0;
		}
	}
}

