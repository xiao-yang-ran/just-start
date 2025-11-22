#include<stdio.h>
#define MAXN 10
int main(){
	int n , k ,i,index,temp;
	int a[MAXN];
	printf("ÇëÊäÈë10¸öÊı×Ö");
	for( i =0 ; i < MAXN;i++){
		scanf("%d",&a[i]);
	}
	for( k = 0;k < MAXN - 1;k++){
		index = k;
		for( i = k + 1;i < MAXN;i ++){
			if(a[index] > a[i]){
				index = i;
			}
		temp = a[index];
		a[index] = a[k];
		a[k] = temp;
		}
	}
	for(k = 0;k < MAXN;k++){
		printf("%6d",a[k]);
	}
	return 0;
}
