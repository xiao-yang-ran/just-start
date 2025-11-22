#include<stdio.h>
#include<cmath>
int main(){
	int n;
	double sum;
	scanf("%d",&n);
	for(int i = 1; i<=n ;i ++){
		sum = sum + sqrt(i);
	}
	printf("%.3lf",sum);
}
