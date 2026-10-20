#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    printf("Pythagorean Triples (side1, side2, hypotenuse <= 500):\n");
    printf("%-10s %-10s %-10s\n", "Side 1", "Side 2", "Hypotenuse");

    // 三重巢狀 for 迴圈暴力搜尋
    for (int side1 = 1; side1 <= 500; side1++) {
        for (int side2 = side1; side2 <= 500; side2++) { // side2 從 side1 開始，避免重複組合
            for (int hyp = 1; hyp <= 500; hyp++) {
                if (side1 * side1 + side2 * side2 == hyp * hyp) {
                    printf("%-10d %-10d %-10d\n", side1, side2, hyp);
                }
            }
        }
    }

    return 0;
}