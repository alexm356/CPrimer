/*
The 1988 United States Federal Tax Schedule was the simplest in recent times. It
had four categories, and each category had two rates. Here is a summary (dollar
amounts are taxable income):
Category Tax
Single 15% of first $17,850 plus 28% of excess
Head of Household 15% of first $23,900 plus 28% of excess
Married, Joint 15% of first $29,750 plus 28% of excess
Married, Separate 15% of first $14,875 plus 28% of excess
For example, a single wage earner with a taxable income of $20,000 dollars owes
0.15 x $17,850 + 0.28 x ($20,000–$17,850). Write a program that lets the user
specify the tax category and the taxable income and that then calculates the tax.
Use a loop so that the user can enter several tax cases.
*/

#define SINGLE 17850
#define HOH 23900
#define MARRIEDJOINT 29750
#define MARRIEDSEP 14875

#include <stdio.h>
#include <ctype.h>

int main(){

    int choice;

    double income;

    double result;

    printf("Enter income: ");
    scanf("%lf", &income);

    printf("\nSpecify Tax Category: \n");
    printf("1. Single\n");
    printf("2. Head of Household\n");
    printf("3. Married, Joint\n");
    printf("4. Married, Separate\n");
    printf("q. quit\n");

    printf("Enter Choice: ");
    while (scanf("%d", &choice) == 1)
    {
        if (isdigit(choice) == 0)
        {
        switch(choice){

            case 1: 
                    printf("1. Single\n");

                    result = (17850 * 0.15) + (0.28 *(income - SINGLE));

                    printf("Tax: %lf\n", result);
                    break;
            case 2:
                    printf("2. Head of Household\n");

                    result = (23900 * 0.15) + (0.28 *(income - HOH));

                    printf("Tax: %lf\n", result);
                    break;
            case 3: 
                    printf("3. Married, Joint\n");

                    result = (29750 * 0.15) + (0.28 *(income - MARRIEDJOINT));

                    printf("Tax: %lf\n", result);
                    break;
            case 4: 
                    printf("4. Married, Separate\n");

                    result = (14875 * 0.15) + (0.28 *(income - MARRIEDSEP));

                    printf("Tax: %lf\n", result);

                    break;

            default: printf("Enter a category: \n");
                    break;
            }
        }
        else{
        printf("Incorrect Input!");
        }

        printf("Enter another number or q to quit: \n");
    }

}
