#include<stdio.h>
#include<string.h>
#define MAXN 100
int main(){
	char a[MAXN][MAXN];
	int n,t,flag;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",a[i]);
	}
	for(int i=0;i<n;i++){
		t = strlen(a[i]);
		flag = 1;
		for(int j=0;j<t;j++){
			if(a[i][j] == '6'){
				a[i][j] = '9';
			}else if(a[i][j] == '9'){
				a[i][j] ='6';
			}else if(a[i][j] !='0' && a[i][j] != '1' && a[i][j] != '8'){
				flag = 0;
			}
		}
		if(flag){
			printf("%s\n",a[i]);
		}else{
			printf("bu ke neng\n");
		}
	}
	return 0;
}
