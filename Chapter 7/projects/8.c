#include <stdio.h>

#include <ctype.h>

#define 

int main(){

    int choice;


    printf("******************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:");
    printf("\n1) $8.75/hr\t2) $9.33/hr\n");
    printf("3) $10.00/hr\t 4) $11.20/hr\n");
    printf("5) quit");
    printf("\n******************************************************************");

    scanf("%d", &choice);

    if(isdigit(choice))
    {
        switch(choice)
        {


            case 1: 

            case 2: 

            case 3: 

            case 4: 

            case 5: 
                break;
        }
        
    }else{
        printf("Choice are 1, 2, 3, 4 or 5");
    }

}