#include<stdio.h>
int main(){
	int i;
	long int h0,n;
	double l=0,h;
	scanf("%d %d",&h0,&n);
	if(n==0){
		printf("0.0 0.0");
		return 0;
	}
	h = h0;
	l += h;
	h = h/2;
	for(i = 2; i <= n;i++){
		l += 2*h;
		h = h/2;
		
	}
	printf("%.1lf %.1lf",l,h);
	return 0;
}

//下面是AI写的 其实就是/2的位置选择 
#include <stdio.h>

int main() {
    long int initial_height, n;
    double total_distance = 0.0, current_height;

    scanf("%ld %ld", &initial_height, &n);
    if (n == 0) {
        printf("0.0 0.0");
        return 0;
    }

    current_height = initial_height;
    total_distance = current_height;  // 第一次下落

    for (int i = 2; i <= n; i++) {
        current_height /= 2;
        total_distance += 2 * current_height;  // 后续每次：反弹+下落
    }

    current_height /= 2;  // 第n次反弹高度
    printf("%.1lf %.1lf", total_distance, current_height);

    return 0;
}

