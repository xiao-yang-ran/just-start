#include<stdio.h>
int main(){
	int choice,price;
	printf("[1] select popcorns\n");
	printf("[2] select crisps\n");
	printf("[3] select cola\n");
	for(int i=1;i<=3;i++){
		printf("input your choice\n");
		scanf("%d",&choice);
		if(choice == 0){
			printf("查询结束");
			return 0;
		}
		switch(choice){
			case 1: price = 1;break;
			case 2: price = 2;break;
			case 3: price = 3;break;
			default:printf("null");return 0;
		}
		printf("该商品的价格为%d元\n",price);
	}
	return 0;
}
//比较经典的错误了，使用printf时不用加&，但使用scanf时要加& 
//还有就是default不要拼错 
