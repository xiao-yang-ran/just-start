#include<stdio.h>
int day_(int year ,int month ,int day){
	int flag , sum = 0;
	int tab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31}
	};
	flag = (year % 4 == 0 && year % 100 !=0 || year % 400 == 0);
	for(int i = 1; i < month ; i++){
		day += tab[flag][i];
	}
	return day;
}
int main(){
	printf("请输入年份 ，月份 ，日期");
	int year,month,day,sum;
	scanf("%d年%d月%d日",&year,&month,&day);
	sum = day_(year,month ,day);
	printf("%d",sum);
	return 0;
}//输入和输出函数的易错点还是要注意
//同时注意函数名称和变量名称不要相同 

