#include<stdio.h>
int main(){
	int a,b,c,d,sum;
	double average;
	printf("请输入四个整数：");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	sum = a,b,c,d;
	average = (a+b+c+d)/4.0;
	printf("sum = %d , average = %.1lf",sum , average);
}
