#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int m,n;
	double sum = 0;
	cin >> m >> n;
	for(int i = m; i <= n;i++){
		sum += pow(i,2) + 1.0 / i;
	}
	cout << "Sum=" << sum;
}//注意这种写法并不好直接控制输出的位数，所以还是老老实实地使用scanf和printf吧 
