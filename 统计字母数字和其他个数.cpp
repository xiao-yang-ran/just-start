#include<iostream>
using namespace std;
int main(){
	int n,digit=0,num=0,other=0;
	char ch;
	cin >> n;
	cin.ignore();
	printf("请输入%d个连续的数字\n",n);
	for(int i = 1;i <= n;i++){
		ch = getchar();
		if(ch >= 'a'&&ch <= 'z'||ch >= 'A'&& ch <= 'Z'){
			digit += 1;
		}else if( ch <= '9'&&ch >= '0'){
			num += 1;
		}else {
			other += 1;
		}
	}
	cout << "digit = " << digit << "     num = " << num << "    other = " << other;
	return 0;
}//cin.ignore非常实用
//注意判断ch是否是数字时的操作 因为0-9的ASCII码与自身并不相等 
