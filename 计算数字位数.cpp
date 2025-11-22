#include<iostream>
using namespace std;
int main(){
	int number , t_number,num = 0;
	cin >> number;
	if(number < 0){
		t_number = -number;
	}else{
		t_number = number;
	}do{
		num ++;
		t_number = t_number / 10;
	}while(t_number != 0);
	cout << "\n" << num;
}
//有一说一，其实没有特别看懂为什么要加一步转化，明明正数负数都是可以的 
//do - while语句可以稍微熟练掌握一下，还是会简便一点的 
