#include<stdio.h>
double fact(int n);
int main(){
	int n ;
	scanf("%d",&n);
	double e = 0;
	for(int i = 0;i <= n;i++){
		e += 1.0/fact(i);
	}
	printf("%.8lf",e);
	
}
double fact(int n){
	double  result = 1;
	for(int i = 1;i <= n;i++){
		result *= i;
	}
	return result;
}
