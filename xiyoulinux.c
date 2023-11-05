#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *convert(const char *s) {
    int len = strlen(s);
    char *result = (char *)malloc((len + 1) * sizeof(char));
    strcpy(result, s);

    for (int i = 0; i < len; i++) {
        if (result[i] >= 'a' && result[i] <= 'z') {
            result[i] = result[i] - 32;  // 小写字母转换为大写字母
        } else if (result[i] >= 'A' && result[i] <= 'Z') {
            result[i] = result[i] + 32;  // 大写字母转换为小写字母
        }
    }

    return result;
}

int main(void) {
    const char *str = "XiyouLinux Group 2022";
    char *temp = convert(str);
    puts(temp);

    free(temp);  // 释放动态分配的内存

    return 0;
}