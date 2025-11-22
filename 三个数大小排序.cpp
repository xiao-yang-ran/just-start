#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c;
	if(a < b){
		d = a;
		a = b;
		b = d;
	}
	if( a < c){
		d = a;
		a = c;
		c = d;
	}
	if( b < c){
		d = c;
		c = b;
		b = d;
	}
	cout << a  <<"  "<< b << "  "<< c;
}
