/*

*goal is to find total rainfall for year
*average  yearly rainfall
* average rainfall for each month.

*/

/*
* Concentrate on initialization and on computation scheme.
* To find total for a given year, keep year constant and let month go over its full range.
* This is the inner for loop of first part of program.
*then repeat process for next value of year.
*this is the outer loop of the first part of the program.
* a nested loop structure like this one is natural for handling 2D array.
    * one loop handles first subscript, other handles second subscript

* the second part of program has same structure, but now it changes year with inner loop and month with outer.
* remember, each time outer loop cycles once, inner loop cycles full allotment.
* This arramgeent cycles through all years before changing months.

*/
#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int main(){

    const float rain[YEARS][MONTHS] = {2.2,3.3,2.2,2.4,5.5,6.6,7.7 ,6.6, 5.5,4.4 ,3.3 ,2.2
                                        2.2
                                        2.2
                                        2.2
                                        2.2};
    
    int year, month;
    float subtot, total;

    printf("YEAR RAINFALL (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++)
    { //for each year, sum rainfall for each month
        for(month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %14.1f\n", 2000 + year, subtot);
        total += subtot; //total for all years

    }
    printf("The yearly average is %.1f inches \n\n", total/YEARS);
    printf("Monthy averages:\n\n");
    printf("Jan, feb, mar -etc");

    for(month = 0; month < MONTHS; month++)
    {// for each month, sum rainfall over years
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        printf("%4.1f", subtot/YEARS);
    }
    printf("\n";)


    return 0;
    
}