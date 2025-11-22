#include<stdio.h>
int main(){
	int n,sum=0,num=0;
	scanf("%d",&n);
	while(n != 0){
		sum += n%10;
		num++;
		n = n/10;
	}
	printf("%d %d",num,sum);
	return 0;
}
