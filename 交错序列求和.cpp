#include<stdio.h>
int main(){
	int n , flag = 1;
	double sum = 0;
	printf("Enter n :");
	scanf("%d",&n);
	for(int i = 1 ; i <= n; i++ ){
		sum = sum + flag *1.0* i /(2 * i - 1);
		flag = -flag;
	}
	printf("sum = %.6lf" , sum );
}
