#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int mynumber,yournumber,count = 0;
	srand(time(NULL));
	mynumber = rand()%100+1;//百取余数，为1-99之后+1即为1-100 
	while(count <= 7){
		printf("请输入你的数字(1~100)：");
		scanf("%d",&yournumber);
		if(yournumber > mynumber){
			printf("Too big.\n");
		}
		if(yournumber < mynumber){
			printf("Too small.\n");
		}if(yournumber == mynumber){
			printf("Lucky you!");
			return 0;
		}
		count ++;
	}	
	printf("Game over!");
	return 0;
}
