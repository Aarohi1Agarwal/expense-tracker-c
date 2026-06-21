#include <stdio.h>
#include "expense.h"

int main() {

    int choice;

    while(1) {

        printf("\n===== EXPENSE TRACKER =====\n");

        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Search Expense\n");
        printf("4. Monthly Summary\n");
        printf("5. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addExpense();
                break;

            case 2:
                viewExpenses();
                break;

            case 3:
                searchExpense();
                break;

            case 4:
                monthlySummary();
                break;

            case 5:
                printf("\nExiting...\n");
                return 0;

            default:
                printf("\nInvalid choice\n");
        }
    }

    return 0;
}