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
#include <ctype.h>

void print_choice();

#define ART 1.25
#define BEET 0.65
#define CARROT 0.89
#define LOWSHIP 3.50
#define MIDSHIP 10.00
#define HIGHSHIP 8.00

#define DISCOUNT .05

int main(){ 

    char ch;
    float totalCost, totalCharges;
    int artichokes, beets, carrots, discount;

    double artFinal, carFinal, beetFinal;

    double orderCost, shippingCost, totalPounds;

    print_choice();

    printf("Enter your order: ");

    while ((ch = getchar()) != '#')
    {
        if('\n' == ch){
            continue;
        }
        
        if (islower(ch)) //lowercase only
        {
            switch(ch){
                case 'a':
                    printf("Enter artichokes: ");
                    scanf("%d", &artichokes);
                    break;
                case 'b':
                    printf("Enter beets: ");
                    scanf("%d", &beets);
                    break;
                case 'c':
                    printf("Enter carrots: ");
                    scanf("%d", &carrots);
                    break;
                case 'q': 
                    printf("Quitting!");
                    break;
                default: printf("Stumper!");
                        break;
            }    
        }
        else{
            printf("lowercase only");
        }
        while (getchar() != '\n')
            continue; /* skip rest of input line */
        printf("Please type another letter or a #.\n");
    }

    artFinal = artichokes * ART;
    beetFinal = beets * BEET;
    carFinal = carrots * CARROT;

    totalPounds = artichokes + beets + carrots;

    orderCost = artFinal + beetFinal + carFinal;

    if(orderCost > 100.00){
        discount = 1; 
    }else{
        discount = 0;
    }

    if (totalPounds <= 5){
        shippingCost = 3.50;
    }else if (totalPounds >= 5 && totalPounds <= 20){
        shippingCost = 10.00;
    }else if (totalPounds > 20){
        shippingCost = 8.00 + .10 * totalPounds;
    }

     double finalDiscount;


    if (discount == 1){
        finalDiscount = 0.05;
    }

    printf("Total Charge: %lf\n", orderCost);
    printf("Discount: %lf\n", finalDiscount);
    printf("Shipping cost: %lf\n", shippingCost);
    printf("Grand Total: %lf\n", (orderCost -(orderCost * finalDiscount) + shippingCost));


    printf("************************************************\n");


    printf("Purchase info: \n");
    printf("Cost per pound: Artichokes: %lf, Beets: %lf, Carrots: %lf\n", artFinal, beetFinal, carFinal);
    printf("Total pounds ordered: %lf\n", totalPounds);
    printf("Discount: %lf\n", finalDiscount);
    printf("Shipping Charge: %lf\n", shippingCost);
    printf("Grand Total: %lf\n", (orderCost -(orderCost * finalDiscount) + shippingCost));



}

void print_choice(){

    printf("a. artichokes\n");
    printf("b. beets\n");
    printf("c. carrots\n");
    printf("q. quit\n");

}

