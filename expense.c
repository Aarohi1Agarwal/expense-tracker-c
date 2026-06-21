#include <stdio.h>
#include "expense.h"
#include <string.h>

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

void searchExpense() {

    Expense e;

    FILE *fp;

    char search[30];

    int found = 0;

    fp = fopen("expenses.txt","r");

    if(fp==NULL){
        printf("\nNo expenses found.\n");
        return;
    }

    printf("\nEnter Category: ");
    scanf("%s",search);

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

        if(strcmp(search,e.category)==0)
        {

            printf(
                "\nAmount: %.2f",
                e.amount
            );

            printf(
                "\nDate: %s\n",
                e.date);

            found = 1;

        }

    }

    if(found==0)
        printf("\nNo matching expenses.\n");

    fclose(fp);

}

void monthlySummary() {

    Expense e;

    FILE *fp;

    float total = 0;

    fp = fopen("expenses.txt","r");

    if(fp==NULL){
        printf("\nNo data found.\n");
        return;
    }

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
        total += e.amount;
    }

    fclose(fp);

    printf("\n===== SUMMARY =====\n");

    printf(
        "\nTotal Spending: %.2f\n",
        total
    );
}