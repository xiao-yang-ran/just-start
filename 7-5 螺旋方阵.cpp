#include<stdio.h>
int main(){
    int N, a[10][10], s, e, q = 1;
    scanf("%d", &N); 
    for(s = 0, e = N-1; s <= e; s++, e--){
        for(int i = s; i <= e; i++){
            a[s][i] = q++;
        }
        for(int i = s+1; i <= e; i++){
            a[i][e] = q++;
        }
        for(int i = e-1; i >= s; i--){
            a[e][i] = q++;
        }
        for(int i = e-1; i >= s+1; i--){
            a[i][s] = q++;
        }
    }
    for(int k = 0; k < N; k++){
        for(int t = 0; t < N; t++){
            printf("%3d", a[k][t]);
        }
        printf("\n");
    }
    return 0;
}
