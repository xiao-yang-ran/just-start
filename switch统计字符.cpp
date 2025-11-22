#include<stdio.h>
int main(){
	char ch;
	int blank = 0,digit = 0,other = 0;
	while((ch = getchar()) != '\n'){
		switch(ch){
			case ' ':blank++;break;
			case '0':case '1':case '2':case'3': case '4':
			case '5':case '6':case '7':case'8': case '9':
			digit++;break;
			default :other++;break;
		}
	}
	printf("blank = %d, digit = %d, other = %d",blank,digit,other);
	return 0;
}
