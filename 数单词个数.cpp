#include<stdio.h>
int main(){
	int cnt,word;
	char ch;
	printf("input:");
	cnt = word = 0;
	while((ch = getchar()) != '\n'){
		if(ch == ' '){
			word = 0;
		}else if(word == 0){
			word = 1;
			cnt ++;
		}
	}
	printf("%d",cnt);
	return 0;
}//非常优雅的一串代码，其核心在于使用word去标识单词状态与非单词状态
//首先来讲非单词状态：遇到空格维持非单词状态，遇到单词计数并快速进入单词状态
//然后是单词状态:遇到空格立马进入非单词状态，遇到单词则维持原状 
