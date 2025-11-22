#include<stdio.h>
#define MAX 80
int main(){
	char line[MAX];
	int i= 0,k = 0;
	while((line[k] = getchar()) != '\n' ){
		k++;
	}
	line[k] = '\0';
	k--;
	while(i < k){
		if(line[i] != line[k]){
			printf("No");
			return 0;
		}
		i ++ ;
		k -- ;
	}
	printf("Yes");
	return 0;
}
