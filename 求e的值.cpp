#include<stdio.h>
int main(){
	int n;double item;
	scanf("%d",&n);
	double e = 1;
	for(int i = 1; i <= n; i++){
		item = 1;
		for(int j = 1; j<= i; j++){
			item = item * j; 
		}
		e += 1.0 /item;
	}
	printf("e = %.6lf", e);
}
