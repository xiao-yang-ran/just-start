#include<iostream>
using namespace std;
int main(){
	int n,fact,sum=0;
	cout << "请输入你要求的位数";
	cin >> n;
	for(int i = 1; i<= n;i++){
		fact = 1;
		for(int j = 1;j <= i; j++ ){
			fact = fact * j;
		}
		sum += fact;
	} 
	cout << sum;
}
