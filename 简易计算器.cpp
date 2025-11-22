#include<iostream>
int main(){
	double value1,value2,result;
	char op;
	printf("请输入四则运算式子");
	scanf("%lf%c%lf",&value1,&op,&value2);
	if(op == '+'){
		result = value1 + value2;
	}
	if(op == '-'){
		result = value1 - value2;
	}
	if(op == '*'){
		result = value1 * value2;
	}
	if(op == '/'){
		if(value2 == 0){
			printf("错误，除数不能为0");
			return 0;
		}
		result = value1 / value2;
	}
	printf("%g %c %g = %g",value1, op , value2 ,result);
	return 0;
}
