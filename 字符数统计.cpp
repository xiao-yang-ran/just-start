#include<stdio.h>
int main(){
	char ch;
	int n,i,letter = 0,blank = 0 ,digit =0 ,other = 0;
	scanf("%d",&n);
	ch = getchar();
	for(i = 0; i< = n; i++){
		ch = getchar();
		if(ch >= '0' && ch <= '9'){
			digit++;
		}else if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z'){
			letter++;
		}else if(ch == ' ')
		
	}
}
