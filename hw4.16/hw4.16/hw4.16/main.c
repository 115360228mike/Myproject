#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, j, k;

    // (A) 圖案
    printf("(A)\n");
    for (i = 1; i <= 10; i++) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (B) 圖案
    printf("(B)\n");
    for (i = 10; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (C) 圖案
    printf("(C)\n");
    for (i = 10; i >= 1; i--) {
        // 印出前置空白
        for (k = 0; k < 10 - i; k++) {
            printf(" ");
        }
        // 印出星號
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }
    printf("\n");

    // (D) 圖案
    printf("(D)\n");
    for (i = 1; i <= 10; i++) {
        // 印出前置空白
        for (k = 0; k < 10 - i; k++) {
            printf(" ");
        }
        // 印出星號
        for (j = 1; j <= i; j++) {
            printf("%s", "*");
        }
        printf("\n");
    }

    return 0;
}