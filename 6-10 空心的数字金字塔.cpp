#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

/* 你的代码将被嵌在这里 */

void hollowPyramid( int n ){
    int i ,j;
    for(i = 1;i<=n;i++){
        if(i==1){
            for(j = 1;j<n;j++){
                printf(" ");
            }
            printf("1\n");
            continue;
        }
        if(i==n){
            for(j=1;j<=2*n-1;j++){
                printf("%d",i);
            }
            break;
        }
        for(j=1;j<=n-i;j++){
            printf(" ");
        }
        printf("%d",i);
        for(j=1;j<=2*i-3;j++){
            printf(" ");
        }
        printf("%d\n",i);
    }
}
