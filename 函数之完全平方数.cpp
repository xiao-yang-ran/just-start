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
	for(int i=1;n>0;i=i+2){
		n = n - i;
	}
	if(n==0){
		return true;
	}else{
		return false;
	}
}
