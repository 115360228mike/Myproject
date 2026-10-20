#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double principal, rate, interest;
    int days;

    // 提示輸入第一筆本金
    printf("Enter loan principal (-1 to end): ");
    scanf("%lf", &principal);

    while (principal != -1) {
        printf("Enter interest rate: ");
        scanf("%lf", &rate);

        printf("Enter term of the loan in days: ");
        scanf("%d", &days);

        // 計算利息
        interest = principal * rate * days / 365.0;

        // 印出結果
        printf("The interest charge is $%.2f\n", interest);

        // 讀取下一筆本金
        printf("\nEnter loan principal (-1 to end): ");
        scanf("%lf", &principal);
    }

    return 0;
}