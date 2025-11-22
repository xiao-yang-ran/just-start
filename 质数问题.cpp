#include<stdio.h>
int main(){
	int l,r,i,j,flag,num = 0;
	scanf("%d %d",&l,&r);
	for(i=l+1;i<=r-1;i++){
		flag =1;
		if(i == 2 || i==3){
			num++;
			continue;
		}
		for(j=2;j * j <= i; j++){
			if(i % j == 0){
				flag = 0;
				break;
			}
		}
			if(flag == 1){
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
