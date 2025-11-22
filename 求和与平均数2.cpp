#include<stdio.h>
int main(){
	int num,sum;
	double average;
	printf("请输入四个整数");
	for(int i = 1; i <= 4; i++){
		scanf("%d",&num);
		sum = sum + num;
	}
	average = sum / 4.0;
	printf("Sum = %d, average = %.1lf",sum,average);
}
