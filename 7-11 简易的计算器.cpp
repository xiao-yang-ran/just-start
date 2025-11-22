#include<stdio.h>
#include<math.h>
int main(){
	double p1,temp = 0;
	int flag = 1;
	char ch,c;
	while(ch = getchar()){
		if(ch >= '0' && ch <='9'){
			temp = temp*10 + ch - 48;
		}else if(ch != ' ' && ch != '\n'){
			if(flag){
				p1 = temp;
				temp = 0;
				flag = 0;
				c = ch;
			}else{
				switch(c){
					case '+' : p1 += temp;break;
					case '-' : p1 -= temp;break;
					case '*' : p1 *= temp;break;
					case '/' : p1 /= temp;break;
					case '^' : p1 = pow(p1,temp);break;
				}
				temp = 0;
				c = ch;
			}
		}		
		if (c == '='){
			break;
		}
	}
	printf("%.4lf\n",p1);
}
