#include<iostream>
#include<cmath>
using namespace std;
double area(double a ,double b, double c);
double len(double x1,double y1 , double x2 ,double y2);
int main(){
	int x1,y1,x2,y2,x3,y3;
	double a,b,c;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	a = len(x1 ,y1 ,x2 ,y2);
	b = len(x1 ,y1 ,x3 ,y3);
	c = len(x2 ,y2 ,x3 ,y3);
	if(a+b <= c||a+c<= b||b+c<=a){
		cout << "Impossible";
		return 0;
	}else {
		cout << a+b+c << "\n";
		cout << area(a,b,c);
	}
}
double area(double a ,double b ,double c){
	double p = (a + b + c)/2;
	return sqrt( p * (p - a) * ( p - b)* ( p - c));
}
double len(double x1,double y1 , double x2 ,double y2){
	double len = sqrt(pow((x1 - x2),2)+ pow((y1 - y2),2));
	return len;
}
