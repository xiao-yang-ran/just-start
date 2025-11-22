#include<iostream>
using namespace std;
int main(){
	double speed , limit;
	cin >> limit >> speed;
	if(speed > 1.5*limit){
		cout << "吊销驾驶证";
	}else if(speed > 1.1*limit){
		cout << "罚款200元";
	}else{
		cout << "正常驾驶";
	}
	return 0;
}
