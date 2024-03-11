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

#include <stdio.h>

int main(){

    int choice;

    double income;

    printf("Enter income: ");
    scanf("%lf", &income);

    printf("\nSpecify Tax Category");
    printf("1. Single");
    printf("2. Single");
    printf("3. Single");
    printf("4. Single");
    printf("q. quit");


    while (choice != 'q'){
        
        switch(choice){

            case 1: 

            case 2:

            case 3: 

            case 4: 

            default: printf("Enter a category: ");


        }



    }

}