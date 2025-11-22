#include<stdio.h>
int main(){
	char ch;
	while((ch = getchar()) != '\n'){
		if(ch >= 'a' && ch <= 'y'){
			ch = ch + 'A' - 'a' + 1;
		}else if(ch >= 'a' && ch <= 'y'){
			ch = ch - 'A' + 'a' + 1;
		}else if(ch == 'z'){
			ch = 'A';
		}else if(ch == 'Z'){
			ch = 'a';
		}
		printf("%c",ch);
	}
	return 0;
}
