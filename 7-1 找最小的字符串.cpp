#include<stdio.h>
int strc(char *s1,char *s2){
	while( *s1 == *s2 && *s1){
		s1 ++,s2++;
	}
	return *s1 - *s2;
}
void my_strcpy(char *min, char *current) {

char *p1 = min, *p2 = current;
while ((*p1++ = *p2++));  // 经典的指针复制方式
}
int main(){
	char min[80], current[80];
	int n;
	scanf("%d",&n);
	scanf("%s",min);
	for(int i=1;i<n;i++){
		scanf("%s",current);
		if(strc(current,min) < 0){
			my_strcpy(min,current);	
		}
	}
	printf("Min is: %s",min);
	return 0;
}
