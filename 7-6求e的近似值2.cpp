
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    double e = 1.0;  // 初始化为第一项1/0!
    double term = 1.0;  // 当前项的值，初始为1/0!
    
    for (int i = 1; i <= n; i++) {
        term /= i;      // 更新term为1/i!
        e += term;      // 累加到总和
    }
    
    printf("%.8lf\n", e);
    return 0;
}

