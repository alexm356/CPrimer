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

    int switchas = inputs % 2;

    switch(switchas)
    {
        case 0: 

        evenCount++;
            evenSum += input;
            scanf("%d", &inputs);

        case 1:

        oddCount++;
            oddSum += input;
            scanf("%d", &inputs);
    }

    evenResult = evenSum / evenCount;

    oddResult = oddSum / oddCount;

    printf("Total even ints: %d, Average of Even ints: %lf", evenCount, evenResult);
    printf("Total odd ints: %d, Average of odd ints: %lf", oddCount, oddResult);

    return 0;
}