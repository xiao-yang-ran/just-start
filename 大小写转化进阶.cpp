#include<stdio.h>
int main(){
	char ch;
	ch = getchar();
	while(ch!='\n'){
		if(ch == 'z'|| ch == 'Z'){
			ch = ch - 25;
		}else if(ch>='a'&&ch<'z'||ch >= 'Z'&&ch <'Z'){
			ch = ch + 1;
		}
		if(ch>='A'&&ch<='Z'){
			ch = ch-'A'+'a';
		}
		if(ch>='a'&&ch<='z'){
			ch = ch+'A'-'a';
		}
		putchar(ch);
		ch = getchar();
	}
}
