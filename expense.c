#include <stdio.h>
#include "expense.h"

void addExpense() {

    Expense e;

    printf("\nEnter Amount: ");
    scanf("%f",&e.amount);

    printf("Enter Category: ");
    scanf("%s",e.category);

    printf("Enter Date (DD-MM-YYYY): ");
    scanf("%s",e.date);

    printf("\nExpense Saved!\n");

    printf("\n----- DETAILS -----\n");

    printf("Amount: %.2f\n",e.amount);
    printf("Category: %s\n",e.category);
    printf("Date: %s\n",e.date);

}