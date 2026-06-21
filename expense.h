#ifndef EXPENSE_H
#define EXPENSE_H

typedef struct {

    float amount;
    char category[30];
    char date[15];

} Expense;

void addExpense();
void viewExpenses();

#endif