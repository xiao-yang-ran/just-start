#include<iostream>
using namespace std;
int main(){
	char ch;
	ch = getchar();
	if(ch>='a'&&ch<='z'||ch>o='A'&&ch<='Z'){
		cout << "It is a letter";
	}else{
		cout << "It is not a letter";
	}
	return 0;
}
