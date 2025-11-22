#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	double s,area,perimeter;
	scanf("%d %d %d",&a,&b,&c);
	s = 1.0*(a+b+c)/2;
	if(a+b>c && a+c > b&&b+c>a){
		area = sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter = a+b+c;
		printf("area = %.2lf; perimeter = %.2lf",area ,perimeter);
	}else{
		printf("These sides do not correspond to a valid triangle");
	}
	return 0;
}

