#include<stdio.h>
int main(){
	char ch;
	int n,letter = 0, blank = 0 ,digit = 0 ,other = 0 , i;
	scanf("%d", &n);
	ch = getchar();
	for(i = 1; i<= n;i++){
		ch = getchar();
		if(ch == ' ' || ch == '\n'){
			blank++; 
		}else if(ch >= '0'&& ch <= '9'){
			digit++;
		}else if(ch >= 'a' && ch<='z' || ch >= 'A' && ch<= 'Z'){
			letter++;
		}else{
			other++;
		}
	} 
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter,blank,digit,other);
	return 0;
}
