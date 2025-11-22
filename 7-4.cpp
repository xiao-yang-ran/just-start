#include<stdio.h>
int main(){
	int a[6][6],b[16][2],c[16][2],n,flag=1,count1=0,count2=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			flag=1;
			for(int k=0;k<n;k++){
				if(a[i][j] >= a[i][k]){
					continue;
				}else{
					flag = 0;
				}
			}
			if(flag){
				b[count1][0]=i;
				b[count1][1]=j;
				count1++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			flag=1;
			for(int k=0;k<n;k++){
				if(a[i][j] <= a[k][j]){
					continue;
				}else{
					flag = 0;
				}
			}
			if(flag){
				c[count2][0]=i;
				c[count2][1]=j;
				count2++;
			}
		}
	}
	flag = 1;
	for(int i=0;i < count1;i++){
		for(int j =0;j<count2;j++){
			if(b[i][0] == c[j][0] && b[i][1] == c[j][1]){
				printf("%d %d",b[i][0],b[i][1]);
				flag = 0;
			}
		}
	}
	if(flag){
		printf("NONE");
	}
	return 0;
}
