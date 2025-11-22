#include<stdio.h>
#define MAXN 10
int main(){
	int a[MAXN][MAXN][MAXN],m,n[MAXN],b;
	scanf("%d",&b);
	for(int i = 0;i<b;i++){
		n[i] = 0;
		scanf("%d",&m);
		for(int j = 0;j<m;j++){
			for(int k = 0;k<m;k++){
				scanf("%d",&a[i][j][k]);
			}
		}
		for(int j = 0;j<m;j++){
			for(int k = 0;k<j;k++){
				if(a[i][j][k] != 0){
					n[i] = 1;
				}
			}
		}
	}
	for(int i = 0;i <b;i++){
			if(n[i]){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
	return 0;	
}
