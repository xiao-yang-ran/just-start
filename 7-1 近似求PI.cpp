#include<stdio.h>
int main(){
	double eps,eps1 = 1,result = 1;
	int m = 1,n = 1,i=1;
	scanf("%le", &eps);
	while(eps1 >= eps){
		eps1 = eps1 * i/(2*i +1);
		result += eps1;
		i++;
	}
	printf("PI = %.5lf",2*result);
	return 0;
}
