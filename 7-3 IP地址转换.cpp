#include<stdio.h>
int main(){
	char a[33];int p[4]={0,0,0,0};
	scanf("%32s",a);
	for(int k=0;k<4;k++){
		for(int i=8*k;i<=8*k+7;i++){
			p[k] *= 2;
			p[k] += a[i] - '0';
		}
	}
	printf("%d.%d.%d.%d",p[0],p[1],p[2],p[3]);
	return 0;
}
