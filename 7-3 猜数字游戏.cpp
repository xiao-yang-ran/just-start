#include<stdio.h>
int main(){
	int my,your = 1,m,n=0;
	scanf("%d %d",&my,&m);
	while(your > 0){
        scanf("%d",&your);
        n++;
        if(your < 0){
        	printf("Good Guess!\n");
        	return 0;
		}
		if(n<=m){
			if (your < my) printf("Too small\n");
			if (your > my) printf("Too big\n");
			if (your == my){
				if(n == 1){
					printf("Bingo!\n");
				}else if(n <= 3){
					printf("Lucky You!\n");
				}else {
					printf("Good Guess!\n");
				}
				return 0;	
			}
		}else{
			printf("Game Over\n");
			return 0;
		}
	}

}
