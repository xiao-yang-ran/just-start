#include<iostream>
using namespace std;
void pyramid(int n);
int main(){
	int n;
	cin >> n;
	pyramid(n);
}
void pyramid(int n){
	for(int i=1;i<=n;i++){
		for(int j = 1;j<=n-i;j++){
			cout << "  ";
		}
		for(int j = 1;j<=i;j++){
		cout <<"ch" <<"  ";
		}
		cout << "\n";
	}
}
//金字塔都可以使用此种方法进行输出，有多少字符就用多少空格即可 
