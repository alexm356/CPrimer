/*


Write a program that requests the hours worked in a week and then prints the
gross pay, the taxes, and the net pay. Assume the following:
a. Basic pay rate = $10.00/hr
b. Overtime (in excess of 40 hours) = time and a half
c. Tax rate: 15% of the first $300
20% of the next $150
25% of the rest
Use #define constants, and don't worry if the example does not conform to
current tax law.

*/


#include <stdio.h>
#include <stdbool.h>

#define TRUE 1
#define FALSE 0

#define PAY 10.00
#define TIMEHALF 15.00

int main(){

    double grossPay;

    double hours, netPay, taxes;
    
    bool othr;

    double 

    printf("Enter the number of hours worked in a week: ");
    scanf("%lf", &hours);

    if (hours > 40){
        othr = TRUE;
    }
    else {
        othr = FALSE;
    }

    if (othr == TRUE){
        grossPay = hours * TIMEHALF;
    }else {
        grossPay = hours * PAY;
    }

    //


    /*
    
    if (grossPay <= 300.00){
        netPay = grossPay * .15;
    }

    if (grossPay > 300){

    }
    */

    printf("Gross pay: %lf", hours * PAY);

    printf("Taxed Amount: ", taxes);

    printf("Net Pay: %lf", netPay);
}

