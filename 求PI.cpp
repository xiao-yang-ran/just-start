#include<stdio.h>
int main(){
	int n,flag = 1;
	double sum = 0;
	printf("请输入精确度数");
	scanf("%d",&n);
	for(int i = 1;i <= n;i++){
		sum += flag * (1.0 / (2*i - 1));
		flag *= -1;
	}
	printf("%.6lf", 4*sum);
}//可以使用绝对值函数进一步优化
 
