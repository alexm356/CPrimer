/*

Rewrite 3 with switch

*/

#include <stdio.h>

#define STOP '0'

int main(){

    int evenCount = 0, oddCount = 0;

    int evenSum = 0, oddSum = 0;

    int input;

    int inputs;

    int temp;

    double evenResult, oddResult;

    printf("Enter int: ");
    scanf("%d", &inputs);

    switch(inputs)
    {
        case (% 2 == 0):
    }

    do{

        input = inputs;

        if (input % 2 == 0){
            evenCount++;
            evenSum += input;
            scanf("%d", &inputs);
        }else if (input  % 2 == 1){
            oddCount++;
            oddSum += input;
            scanf("%d", &inputs);
        }else if (input == 0){
            break;
        }else{
            printf("Incorrect Input!");
            break;
            
        }

    } while (inputs > 0);

    evenResult = evenSum / evenCount;

    oddResult = oddSum / oddCount;

    printf("Total even ints: %d, Average of Even ints: %lf", evenCount, evenResult);
    printf("Total odd ints: %d, Average of odd ints: %lf", oddCount, oddResult);

    return 0;
}