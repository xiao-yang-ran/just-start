#include<stdio.h>
int main(){
	int a[11],n,index = 0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		if(a[i] > a[index]){
			index = i;
		}
	}
	printf("%d %d",a[index],index);
}
