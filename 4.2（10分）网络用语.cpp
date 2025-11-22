#include<stdio.h>
#define MAXN 500
int cm(char a[],char b[]){
	int i=0;
	while(a[i]==b[i] &&a[i]!='\0' ){
		i++;
	}
	if(a[i] == '\0'){
	return 1;
	}else{
		return 0;
	}
	
}
int main(){
	char a[10][6],b[MAXN];
	int n,k=0;
	scanf("%d",&n);
	for(int i = 0;i<n;i++){
		scanf("%s",a[i]);
	}
	getchar();
	while((b[k++] = getchar()) != '\n'){
		
	}
	b[k] = '\0';
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			if(cm(a[j],&b[i])){
				printf("*");
			}
		}
		putchar(b[i]);
	}
	return 0;	
}
