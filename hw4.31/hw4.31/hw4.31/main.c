#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j;

    // 上半部分（包含最長的中間行，共 5 行）
    for (i = 1; i <= 5; i++) {
        // 印出前置空格
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // 印出星號 (1, 3, 5, 7, 9 個)
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // 下半部分（共 4 行）
    for (i = 4; i >= 1; i--) {
        // 印出前置空格
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // 印出星號 (7, 5, 3, 1 個)
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}