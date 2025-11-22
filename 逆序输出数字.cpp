#include<iostream>
using namespace std;
int main(){
	int num,t_num;
	cin >> num;
	t_num = num;
	cout << "逆序输出如下：";
	do{
		cout << t_num%10;
		t_num = t_num /10;
	}while(t_num !=0); 
	return 0;
}//注意int的大小限制吧 
