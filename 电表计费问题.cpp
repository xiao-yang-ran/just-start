#include<iostream>
using namespace std;
int main(){
	double num , fee;
	cin >> num;
	if(num < 0){
		cout << "Invalid Value";
	}else if(num<=50){
		fee = num * 0.53;
	}else{
		fee = 50 * 0.53 + (num - 50) *0.58;
	}
	cout << "Fee = " << fee;
}
//优化方向：使用的变量名称，输出的格式化 
