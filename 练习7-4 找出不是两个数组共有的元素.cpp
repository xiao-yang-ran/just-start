#include<stdio.h>
int cm(int a,int b[],int n){
	for(int i=0;i<n;i++){
		if(a==b[i]){
			return 0;
		}
	}
	return 1;
}
int main(){
	int m,n,a[20],b[20];
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<m;i++){
			if(cm(a[i],b,n)){
				printf("%d ",a[i]);
			}
		}
	
	for(int j=0;j<n;j++){
			if(cm(b[j],a,m)){
				printf("%d ",b[j]);
			}
		}
	return 0;
	
}
