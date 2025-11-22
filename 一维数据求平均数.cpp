#include<stdio.h>
int main(){
	int i , n;
	double average = 0 , sum = 0;
	int a[10];
	printf("Enter n:");
	scanf("%d",&n);
	if(n>=1 && n<= 10){
		for(i = 0;i< n;i++){
			scanf("%d",&a[i]);//输入时不能忘记打＆ 
		}
		for(i = 0;i< n; i++){
			sum += a[i];
		}
	}
	average = sum / n;
	printf("超过平均数的有");
	for(i = 0; i< n;i++){
		if(a[i] >= average){
			printf("%d\n",a[i]);
		}
	}
	printf("average = %.4lf" , average);
} 
