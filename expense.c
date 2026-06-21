#include <stdio.h>
#include "expense.h"

void addExpense() {

    Expense e;

    FILE *fp;

    fp = fopen("expenses.txt","a");

    if(fp==NULL){
        printf("Error opening file\n");
        return;
    }

    printf("\nEnter Amount: ");
    scanf("%f",&e.amount);

    printf("Enter Category: ");
    scanf("%s",e.category);

    printf("Enter Date (DD-MM-YYYY): ");
    scanf("%s",e.date);

    fprintf(
        fp,
        "%.2f %s %s\n",
        e.amount,
        e.category,
        e.date
    );

    fclose(fp);

    printf("\nExpense Saved Successfully!\n");
}

void viewExpenses() {

    Expense e;

    FILE *fp;

    fp = fopen("expenses.txt","r");

    if(fp==NULL){
        printf("\nNo expenses found.\n");
        return;
    }

    printf("\n===== EXPENSE HISTORY =====\n");

    while(
        fscanf(
            fp,
            "%f %s %s",
            &e.amount,
            e.category,
            e.date
        ) != EOF
    )
    {
        printf(
            "\nAmount: %.2f",
            e.amount
        );

        printf(
            "\nCategory: %s",
            e.category
        );

        printf(
            "\nDate: %s\n",
            e.date
        );
    }

    fclose(fp);

}