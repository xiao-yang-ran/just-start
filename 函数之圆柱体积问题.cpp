#include<iostream>
using namespace std;
#define PI 3.1415926
double volume(double r,double h);
int main(){
	double r,h,v;
	cin >> r >> h;
	v = volume(r,h);
	cout << v;
	
	
}
double volume(double r,double h){
	double result;
	result = PI * r * r * h;
	return result;
}
