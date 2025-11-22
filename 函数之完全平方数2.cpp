#include<iostream>
#include<cmath>
using namespace std;
int main(){
	bool Issquare(int n);
	int num;
	cin >> num;
	cout << Issquare(num);
}
bool Issquare(int n){
     if(sqrt(n)%1==0){
     	return true;
	 }else{
	 	return false;
	 }
}//很遗憾这种方法是错误的，因为c++中的取余只能应用于整数范围内
//一些其他的方法等待以后学习吧 
