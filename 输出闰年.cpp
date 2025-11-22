#include<stdio.h>
int main(){
	int	year,i,flag = 0;
	scanf("%d",&year);
	if(year < 2001 || year > 2100){
		printf("Invalid year!");
		return 0;
	}else{
		for(i = 2001;i<= year;i++ ){
			if(i % 4 == 0 && i % 100 !=0||i%400==0){
				printf("%d\n",i);
				flag ++;
			}
		}
	}
	if(flag == 0){
		printf("None");
	}
	return 0;
}
