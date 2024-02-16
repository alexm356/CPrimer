/*

Write a program that reads integers until 0 is entered. After input terminates, the
program should report the total number of even integers (excluding the 0)
entered, the average value of the even integers, the total number of odd integers
entered, and the average value of the odd integers.

*/

#include <stdio.h>

#define STOP '0'

int main(){

    int evenCount = 0, oddCount = 0;

    int evenSum = 0, oddSum = 0;

    int input;

    double evenResult, oddResult;

    printf("Enter int: ");
    scanf("%d", &input);

    while(scanf("%d", &input)== 1){

        if (input % 2 == 0){
            evenCount++;
            evenSum += input;
        }else if (input %2 == 1){
            oddCount++;
            oddSum += input;
        }else if(input == 0){
            break;
        }else{
            printf("Incorrect Input!");
            break;
        }

    }

    evenResult = evenSum / evenCount;

    oddResult = oddSum / oddCount;

    printf("Total even ints: %d, Average of Even ints: %lf", evenCount, evenResult);
    printf("Total odd ints: %d, Average of odd ints: %lf", oddCount, oddResult);

    return 0;
}