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
    
    double hours, netPay, taxes, grossPay, othr;

    double overtimeHours;

    double tax1, tax2, tax3, taxFinal;
    
    printf("Enter the number of hours worked in a week: ");
    scanf("%lf", &hours);

    if (hours > 40){
        othr = TRUE;
        overtimeHours = hours - 40;
    }
    else {
        othr = FALSE;
    }

    if (othr == TRUE){
        grossPay = (hours * PAY) + (overtimeHours * TIMEHALF);
    }else {
        grossPay = hours * PAY;
    }


    while (grossPay > 0){

        tax1 = grossPay * 0.15;
        grossPay -= 300;
        tax2 = grossPay * .20;
        grossPay -= 150;
        tax3 = grossPay * .25;
    }
    //

    taxFinal = tax1+ tax2 + tax3;

    netPay = grossPay - taxFinal;


    printf("Gross pay: %lf", grossPay);

    printf("Taxed Amount: %lf", taxFinal);

    printf("Net Pay: %lf", netPay);
}

