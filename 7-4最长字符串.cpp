#include<stdio.h>
int strl(char *p1,char *p2){
	while( *p1 && *p2){
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
void strp(char *p1,char *p2){
	while(*(p1++) = *(p2++));
}
int main(){
	char a[80],b[80];int n;
	scanf("%d",&n);
	scanf("%s",a);
	for(int i=1;i<n;i++){
		scanf("%s",b);
		if(strl(a,b) < 0){
		strp(a,b);
	}
	}
	printf("The longest is: %s",a);
}
