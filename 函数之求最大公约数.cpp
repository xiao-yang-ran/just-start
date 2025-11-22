#include<iostream>
using namespace std;
int main(){
	int gcd(int m,int n);
	int m ,n;
	cin >> m>>n;
	cout << gcd(m,n);
}
int gcd(int m, int n){
	if(m <n){
		int temp=m;
		m = n;
		n = temp;
	}
	int r = m%n;
	while(r != 0){
		m = n;
		n = r;
		r = m % n;
	}
	return n;
}
