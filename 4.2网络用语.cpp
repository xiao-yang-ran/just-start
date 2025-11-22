#include<stdio.h>
#include<string.h>
#define MAXN 10005

int cm(char a[], char b[]) {
    int i = 0;
    while (a[i] == b[i] && a[i] != '\0') {
        i++;
    }
    return a[i] == '\0';
}

int main() {
    char a[10][6], b[MAXN];
    int n;
    
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }
    scanf("%s", b);  // 直接读取数字串
    
    int len = strlen(b);
    int i = 0;
    
    while (i < len) {
        int found = 0;
        // 检查从当前位置i开始是否能匹配任何网络用语
        for (int j = 0; j < n; j++) {
            int word_len = strlen(a[j]);
            // 检查剩余长度是否足够且匹配
            if (i + word_len <= len && cm(a[j], &b[i])) {
                printf("*%s*", a[j]);
                i += word_len;  // 跳过已匹配的部分
                found = 1;
                break;
            }
        }
        if (!found) {
            // 如果没有匹配，输出当前字符并移动到下一个
            printf("%c", b[i]);
            i++;
        }
    }
    
    return 0;
}
