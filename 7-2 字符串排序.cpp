#include<stdio.h>
int str1(char *p1,char*p2){
	while(*p1 == *p2 && *p1){
		p1++;
		p2++;
	}
	return *p1 - *p2;
}
void strq(char *p1,char *p2){
	while(*(p1++) = *(p2)++);
}
int main(){
	char p1[80],p2[80],p3[80],p4[80],p5[80];
	scanf("%s%s%s%s%s",p1,p2,p3,p4,p5);
	char *p[6] = {p1,p2,p3,p4,p5};
	for(int i=0;i<4;i++){
		for(int k = i;k<5;k++){
			if(str1(p[i],p[k])>0){
				p[5] = p[i];
				p[i] = p[k];
				p[k] = p[5]; 
			}
		}
	}
	printf("After sorted:\n");
	for(int i=0;i<5;i++){
		printf("%s\n",p[i]);
	}
}
