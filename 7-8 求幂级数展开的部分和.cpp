#include<stdio.h>
int main(){
	int a = 1£» 
	double r=1,sum = 1,x;
	scanf("%lf",&x);
	do{
		r = r * x / a;
		sum += r;
		a++;
	}while(r > 0.00001);
	printf("%.4lf",sum);
	return 0;
	
}
