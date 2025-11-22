#include<stdio.h>
#include<math.h>
int Pure(long long n){
	int result;
	result = 1;
	for(int i=2;i <= sqrt(n);i++){
		if(n % i == 0){
			result = 0;
		}
	}
	return result;
}
int main(){
	long long pure;
	int n;
	scanf("%d",&n);
	for(int i = 2; i<= n;i++){
		pure = pow(2,i) - 1;
		if(Pure(pure)){
			printf("%lld\n",pure);
		}
	}
	return 0;
}
