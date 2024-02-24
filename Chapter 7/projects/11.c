/*
The ABC Mail Order Grocery sells artichokes for $1.25 per pound, beets for $0.65
per pound, and carrots for $0.89 per pound. It gives a 5% discount for orders of
$100 or more prior to adding shipping costs. It charges $3.50 shipping and
handling for any order of 5 pounds or under, $10.00 shipping and handling for
orders over 5 pounds and under 20 pounds, and $8.00 plus $0.10 per pound for 
shipments of 20 pounds or more. 

Write a program that uses a switch statement
in a loop such that a response of a lets the user enter the pounds of artichokes
desired, b the pounds of beets, c the pounds of carrots, and q allows the user to
exit the ordering process. The program then should compute the total charges,
the discount, if any, the shipping charges, and the grand total. The program then
should display all the purchase information: the cost per pound, the pounds
ordered, and the cost for that order for each vegetable, the total cost of the
order, the discount (if there is one), the shipping charge, and the grand total of
all the charges.
*/

#include <stdio.h>

#define ART 1.25
#define BEET 0.65
#define CARROT 0.89
#define LOWSHIP 3.50
#define MIDSHIP 10.00
#define HIGHSHIP 8.00

int main(){ 

    char ch;

    float totalCost, totalCharges, discoun;

    int artichokes, beets, carrots;

    while ((ch = getchar()) != '#'){

        switch(ch){

            case 'a':

            printf("Enter artichokes: ")


            case 'b':

            printf("Enter beets: ")

            case 'c':

            printf("Enter carrots: ")


            case 'q': 

            printf("Quitting!");
            break;

            default: 
        }
    }

    printf("Cost per pound:  ");
    printf("Pounds ordered: ");
    printf("Cost of order: ");

}