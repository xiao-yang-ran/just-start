#include<stdio.h>
#include<math.h>
int main(){
	int n=1 , flag = 1;
	double m = 1.0 / n,eps , sum = 0;
	printf("请输入您所要求的精度");
	scanf("%lf",&eps);
	while(fabs(m) >= eps){
		sum += flag * m;
		n += 2;
		flag *= -1;
		m = 1.0 / n;
	}
	printf("%.10lf",4 *sum);
}
