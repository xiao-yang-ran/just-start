#include<iostream>
using namespace std;
double fact(int n);
double fact(int n){
	int result = 1;
	for(int i = 1; i<= n;i++){
		result *= i;
	}
	return result;
}
int main(){
	int n ;
	double sum = 0;
	cin >> n;
	for (int j = 1; j <= n; j++){
		sum += fact(j);
	}
	cout << "sum = " << sum;
	return 0;
}
