#include<iostream>
using namespace std;
int main(){
	double ride,wait,fee=0;
	cin >> ride >> wait;
	if(ride <= 3){
		fee += 10;
	}else if(ride <=10){
		fee += 10 + 2 * (ride - 3);
	}else {
		fee += 10 + 14 + 3*(ride -10);
	}
	fee += int(wait)/5*2;
	cout << int(fee + 0.5);
}
