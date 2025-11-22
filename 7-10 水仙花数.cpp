#include<stdio.h>
int main(){
	int N,i,a=1,t,q,b,mid,sum = 0,j;
	scanf("%d",&N);
	for(i = 1;i<N;i++){
		a *= 10;
	}
	for(b = a * 10 - 1;a <= b;a++){
		mid = a;
		sum = 0;
		for(i = 1; i<= N ;i++){
			t = mid % 10;
			q = 1;
			for(j = 1;j <= N;j++){
				q *= t;
			}
			sum += q;
			mid /=10;
		}
		if(a == sum){
			printf("%d\n",a);
		}
		
	} 
	return 0;
}
