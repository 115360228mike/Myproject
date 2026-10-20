#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    double hours, rate, salary;

    // 提示輸入第一筆工時
    printf("Enter # of hours worked (-1 to end): ");
    scanf("%lf", &hours);

    while (hours != -1) {
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate);

        // 判斷是否有加班（超過 40 小時）
        if (hours <= 40) {
            salary = hours * rate;
        }
        else {
            salary = 40.0 * rate + (hours - 40.0) * rate * 1.5;
        }

        // 印出薪資結果
        printf("Salary is $%.2f\n", salary);

        // 讀取下一筆工時
        printf("\nEnter # of hours worked (-1 to end): ");
        scanf("%lf", &hours);
    }

    return 0;
}