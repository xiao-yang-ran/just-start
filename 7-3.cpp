#include<stdio.h>
int main(){
	int a[6][6],m,n,q;
	scanf("%d %d",&m,&n);
	for(int i =0;i <n;i++){
		for(int j= 0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	m = m%n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j - m >= 0){
			q = j - m;
		}else{
			q = j - m +n;
		}
		printf("%d ",a[i][q]);
		}
		printf("\n");
	}
	return 0;
}

