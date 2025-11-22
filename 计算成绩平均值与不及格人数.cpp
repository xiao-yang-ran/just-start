#include<iostream>
using namespace std;
int main(){
	int grades,sum=0,count=0,num=0;
	cin >> grades;
	while(grades >= 0){
		if(grades < 60){
			count ++;
		}
		sum += grades;
		cin >> grades;
		num ++;
	}
	cout << "不及格人数为" << count << " \n ";
	cout << "班级平均分数为" << 1.0 * sum / num; 
}
