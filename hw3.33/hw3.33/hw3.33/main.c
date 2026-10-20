#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int length, breadth;

    printf("Enter length and breadth: ");
    scanf("%d%d", &length, &breadth);

    // 糷癹伴北︽计 (length)
    for (int i = 1; i <= length; i++) {
        // ず糷癹伴北–︽じ计 (breadth)
        for (int j = 1; j <= breadth; j++) {
            // 狦琌材︽程︽┪琌–︽材籔程じ碞 '+'
            if (i == 1 || i == length || j == 1 || j == breadth) {
                printf("+");
            }
            else {
                // 玥フΘみ狦
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}