#include<stdio.h>
int main(){
	int i,n,a = 0 ,b = 0,c = 0,g;
	scanf("%d",&n);
	for( i = 1; i <= n;i++){
		scanf("%d",&g);
	if(g >= 85){
		a++;
	} else if( g >= 60){
		b++;
	}else {
		c++;
	}
	
	}
	printf("%d %d %d",a ,b ,c);
	return 0;

}
