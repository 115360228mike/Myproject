#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int paycode;

    printf("Enter paycode (1: Manager, 2: Hourly, 3: Commission, 4: Pieceworker, -1 to end): ");
    scanf("%d", &paycode);

    while (paycode != -1) {
        double salary = 0.0;

        switch (paycode) {
        case 1: {
            double weekly_salary;
            printf("Manager selected. Enter fixed weekly salary: ");
            scanf("%lf", &weekly_salary);
            salary = weekly_salary;
            printf("Manager's weekly pay is: $%.2f\n\n", salary);
            break;
        }
        case 2: {
            double hours, hourly_rate;
            printf("Hourly worker selected. Enter hours worked: ");
            scanf("%lf", &hours);
            printf("Enter hourly rate: ");
            scanf("%lf", &hourly_rate);

            if (hours <= 40) {
                salary = hours * hourly_rate;
            }
            else {
                salary = 40 * hourly_rate + (hours - 40) * hourly_rate * 1.5;
            }
            printf("Hourly worker's weekly pay is: $%.2f\n\n", salary);
            break;
        }
        case 3: {
            double gross_sales;
            printf("Commission worker selected. Enter gross weekly sales: ");
            scanf("%lf", &gross_sales);
            salary = 250.0 + (gross_sales * 0.057);
            printf("Commission worker's weekly pay is: $%.2f\n\n", salary);
            break;
        }
        case 4: {
            int items;
            double pay_per_item;
            printf("Pieceworker selected. Enter number of items produced: ");
            scanf("%d", &items);
            printf("Enter wage per item: ");
            scanf("%lf", &pay_per_item);
            salary = items * pay_per_item;
            printf("Pieceworker's weekly pay is: $%.2f\n\n", salary);
            break;
        }
        default:
            printf("Invalid paycode entered.\n\n");
            break;
        }

        printf("Enter paycode (1: Manager, 2: Hourly, 3: Commission, 4: Pieceworker, -1 to end): ");
        scanf("%d", &paycode);
    }

    return 0;
}