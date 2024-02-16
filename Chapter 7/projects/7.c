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

#define PAY 10.00

int main(){


    double hours;


    printf("Enter the number of hours worked in a week: ");
    scanf("%lf", &hours);

    printf("Gross pay: %lf", hours * PAY);
}

