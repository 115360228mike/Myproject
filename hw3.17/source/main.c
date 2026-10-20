#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int account;
    double beginning_balance, total_charges, total_credits, credit_limit;
    double new_balance;

    // 提示輸入第一個帳號
    printf("Enter account number (-1 to end): ");
    scanf("%d", &account);

    // 使用 while 迴圈處理多個客戶，直到輸入 -1 結束
    while (account != -1) {
        printf("Enter beginning balance: ");
        scanf("%lf", &beginning_balance);

        printf("Enter total charges: ");
        scanf("%lf", &total_charges);

        printf("Enter total credits: ");
        scanf("%lf", &total_credits);

        printf("Enter credit limit: ");
        scanf("%lf", &credit_limit);

        // 計算新餘額
        new_balance = beginning_balance + total_charges - total_credits;

        // 判斷是否超過信用額度
        if (new_balance > credit_limit) {
            printf("Account:      %d\n", account);
            printf("Credit limit: %.2f\n", credit_limit);
            printf("Balance:      %.2f\n", new_balance);
            printf("Credit Limit Exceeded.\n");
        }

        printf("\n"); // 印出空行分隔下一次輸入

        // 讀取下一個帳號
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account);
    }

    return 0;
}