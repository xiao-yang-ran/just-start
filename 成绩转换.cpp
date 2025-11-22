#include<iostream>
using namespace std;
int main(){
	int grades;
	cin >> grades;
	if(grades >= 90){
		cout << "A";
	}else if(grades >= 80){
		cout << "B";
	}else if(grades >= 70){
		cout << "C";
	}else if(grades >= 60){
		cout << "D";
	}else{
		cout << "E";
	}
	return 0;
}
