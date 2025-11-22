#include<stdio.h>
int main(){
	double used , fee;
	printf("请输入用电度数:");
	scanf("%lf",&used);
	if(used < 0){
		printf("Invalid Value");
	}else if(used<=50){
		fee = used * 0.53;
	}else{
		fee = 50 * 0.53 + (used - 50) *0.58;
	}
	printf("电费为%.2lf元",fee);
}
