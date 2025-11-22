#include<stdio.h>
void pr(int a[]){
	for(int i = 0;i<5;i++){
		printf("%d ", a[i]);
	}
}
int main(){
	int a[5][5];
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			scanf("%d",&a[i][j]);
		}
	}
	pr(a[1]);
}//上面的程序这样写是毫无问题的，因为二维数组的本质上所储存的就是若干个一维数组，那么二维数组的
//每一行自然也就是一个一维数组
//如果想要传递整个数组那分别是 pr(int a[][5]) 与 pr(a) 
