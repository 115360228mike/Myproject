#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double sales;
    double salary;

    // 提示輸入第一筆銷售額
    printf("Enter sales in dollars (-1 to end): ");
    scanf("%lf", &sales);

    // 使用 while 迴圈處理多個銷售人員，直到輸入 -1 結束
    while (sales != -1) {
        // 計算薪資：基本薪資 200 加上銷售額的 9%
        salary = 200.0 + (sales * 0.09);

        // 印出計算後的薪資結果
        printf("Salary is: $%.2f\n", salary);

        // 讀取下一筆銷售額
        printf("\nEnter sales in dollars (-1 to end): ");
        scanf("%lf", &sales);
    }

    return 0;
}