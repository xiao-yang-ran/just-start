#include<stdio.h>
int main(){
	int a,b;
	char c;
	double price,t;
	scanf("%d %d %c",&a ,&b ,&c);
	switch(b){
		case 90:price = 6.95;break;
		case 93:price = 7.44;break;
		case 97:price = 7.93;break;
	}
	if(c == 'm'){
		t = 0.95;
	}else {
		t = 0.97;
	}
	printf("%.2lf",a * price * t);
	return 0;
}
