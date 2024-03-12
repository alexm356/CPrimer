#include <stdio.h>

#include <ctype.h>

double hours_worked();

#define HR1 8.75
#define HR2 10.00
#define HR3 9.33
#define HR4 11.20

int main(){

    int choice;

    double hoursWorked;

    


    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:");
    printf("\n1) $8.75/hr\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t 4) $11.20/hr\n");
    printf("5) quit");
    printf("\n******************************************************************\n");

    scanf("%d", &choice);

    while(isdigit(choice) == 1){
    
        switch(choice)
        {
            case 1: 

                hoursWorked = hours_worked();

            case 2: 

                hoursWorked = hours_worked();

            case 3: 

                hoursWorked = hours_worked();

            case 4: 

                hoursWorked = hours_worked();

            case 5: 
                break;

            default: 
                printf("Choice are 1, 2, 3, 4 or 5");
        }
        
    }
}

double hours_worked(){

    double hours;

    printf("Enter hours worked: ");
    scanf("%d", &hours);

    return hours;

}