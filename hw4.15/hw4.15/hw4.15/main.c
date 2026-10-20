#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double principal = 5000.0;
    int years = 15;

    // 使用 for 迴圈變動利率：從 10.0% 到 12.0%，每次增加 0.5% (0.005)
    for (double rate = 0.10; rate <= 0.12; rate += 0.005) {
        printf("Interest Rate: %.1f%%\n", rate * 100);
        printf("%s%21s\n", "Year", "Amount on deposit");

        double amount = principal;
        for (int year = 1; year <= years; year++) {
            amount = amount * (1.0 + rate);
            printf("%4d%21.2f\n", year, amount);
        }
        printf("\n");
    }

    return 0;
}