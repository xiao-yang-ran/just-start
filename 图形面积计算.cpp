#include<stdio.h>
#include<cmath>
double area(double x, double y ,double z);
int main(){
	double a1,a2,a3,a4,a5,a6,a7,S;
	printf("请从1到7输入相应的边长\n");
	scanf("%lf%lf%lf%lf%lf%lf%lf",&a1,&a2,&a3,&a4,&a5,&a6,&a7);
	S = area(a1,a5,a6)+area(a4,a6,a7)+area(a2,a3,a7);
	printf("图形的总面积为%lf",S);
	
	
}
double area(double x,double y,double z){
	double p = (x+y+z)/2;
	return sqrt(p*(p-x)*(p-y)*(p-z));
}//海伦公式可以记忆一下，以后会经常用到 
