#include<stdio.h>
int main(){
	int a[3][3] = {1,2,3,4,5,6,7,8,9};
	int i,j;
	for (j = 0;j < 3;j++){
		for( i = 0;i < 3;i++){
			printf("%6d",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}//将矩阵倒置目前来说共有两种方法
//a[i][j] = a[j][i]
//将外层循环作为列循环即可 
