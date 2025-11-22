#include<stdio.h>
#define MAXN 6
int main(){
	int a[MAXN][MAXN];
	int i,j,m,n,r = 0,c = 0;
	printf("Enter m,n");
	scanf("%d%d",&m,&n);
	for(i = 0 ; i < m; i++){
		for(j = 0; j< n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i = 0;i< m;i++){
		for( j =0; j< n ;j++){
			if(a[i][j] > a[r][c]){
				r = i;
				c = j;
			}
		}
	}
	printf("max = a[%d][%d] = %d",r,c,a[r][c]);
	return 0;
} 
