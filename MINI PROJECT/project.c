//project Name : Banking Interest Simuator.

#include <stdio.h>

        //Name:Bittu kumar
        //ERP:10412

int main() {
    float principal, rate, balance;
    int years;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter number of years: ");
    scanf("%d", &years);

    balance = principal;

    for (int i = 1; i <= years; i++) {
        float interest = balance * (rate / 100);
        balance += interest;
    }

    printf("Final balance after %d years: %.2f\n", years, balance);

    return 0;
}
/* input
Enter princple amount:1000
Enter annual interest rate(in %):5
Enter number of years:3

Final balance after 3 years: 1157.62
*/