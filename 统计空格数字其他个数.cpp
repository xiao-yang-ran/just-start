#include<iostream>
using namespace std;
int main(){
	int n, blank = 0, digit = 0,other = 0;
	char ch;
	cout << "请输入你要输入的字符个数";
	cin >> n;
	cin.ignore();
	for(int i = 1;i <= n; i++){
		ch = getchar();
		switch(ch){
			case ' ': case '\n' : blank ++;break;
			case '1': case '2' : case '3': case '4': case '5': 
			case '6': case '7' : case '8': case '9':case '0': digit ++;break;
			default : other++;break;  
		}
	}
	cout << "blank =  " << blank << "   digit = " << digit << "   other = " << other; 
}
