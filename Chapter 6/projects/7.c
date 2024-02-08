#include <stdio.h>

int main(){

    float num1, num2;

    float difference, product, result;


    
    
    printf("Enter two floating point numbers: ");
    while(scanf("%f%f", &num1, &num2) == 2)
    {
        difference = num1 - num2;

        product = num1 * num2;

        printf("Result %f\n", difference / product);

        printf("Enter next pair of numbers or q to quit.\n");
    }

    return 0;    

}

