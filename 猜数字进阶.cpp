#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
	int mynumber,yournumber,count = 0 , n;
	cin >> n;
	srand(time(0));
	mynumber = rand()%100 + 1;
	while(count + 1 <= n){
		count ++;
		cout << "Enter your number\n";
		cin >> yournumber;
		if(yournumber < 0){
			cout << "Null";
			return 0;
		}
		if(yournumber == mynumber){
			if(count ==1){
				cout << "Bingo.";
				return 0;
			}else if(count <= 3){
				cout << "Lucky you.";
				return 0;
			}else{
				cout <<"Good guess.";
				return 0;
			}
		}
		if(yournumber > mynumber){
			cout << "Too big.\n";
		}
		if(yournumber < mynumber){
			cout << "Too small.\n";
		}
	}
		cout << "Game over";
		return 0;
} //有一说一，此处用for循环是更好的选择，因为已经明确了循环次数n 
