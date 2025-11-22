#include<stdio.h>
int main(){
	int num,i;
	double price;
	printf("[1] apple\n");
	printf("[2] pear\n");
	printf("[3] orange\n");
	printf("[4] grape\n");
	printf("[0] exit\n");
	for(i = 1;i<=5;i++){
		scanf("%d",&num);
		switch(num){
			case 0 :return 0;
			case 1 :price = 3.00;printf("price = %.2lf\n",price);break;
			case 2 :price = 2.50;printf("price = %.2lf\n",price);break;
			case 3 :price = 4.10;printf("price = %.2lf\n",price);break;
			case 4 :price = 10.20;printf("price = %.2lf\n",price);break;
			deflaut :price = 00.00;printf("price = %.2lf\n",price);break;	
		}
return 0;}
}
