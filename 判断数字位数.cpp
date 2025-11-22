#include<iostream>
using namespace std;
int main(){
	char ch;int num = 0;
	cout << "请输入一个数字，以空格作为结束\n"; 
	while(ch != '\n'){
		ch = getchar();
		if(ch >= '0' && ch <= '9'){
			num ++;
		}
		cout << ch;
	}
	cout << "It contains " << num << " digit(s).";
}//为什么这里不是输入一个之后接着输出一个呢？ 
