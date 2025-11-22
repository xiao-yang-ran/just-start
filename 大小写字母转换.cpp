#include<stdio.h>
int main(){
	char ch;
	printf("input your char:");
	ch = getchar();
	while(ch!='\n'){
		if(ch>='A'&&ch<='Z'){
			ch = ch-'A'+'a';
		}
		if(ch>='a'&&ch<='z'){
			ch = ch+'A'-'a';
		}
		putchar(ch);
		ch = getchar();
	}
	return 0;
}//应用时需要输入一连串的字母 
