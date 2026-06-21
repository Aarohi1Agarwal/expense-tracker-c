#include <stdio.h>
#include "expense.h"

int main() {

    int choice;

    while(1) {

        printf("\n===== EXPENSE TRACKER =====\n");

        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Search Expense\n");
        printf("4. Exit\n");

        printf("\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice) {

            case 1:
                addExpense();
                break;

            case 2:
                printf("\nView Expenses selected\n");
                break;

            case 3:
                printf("\nSearch Expense selected\n");
                break;

            case 4:
                printf("\nExiting...\n");
                return 0;

            default:
                printf("\nInvalid choice\n");
        }
    }

    return 0;
}