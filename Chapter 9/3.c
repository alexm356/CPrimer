#include <stdio.h>


void three_arguments(char character, int value, int values1); 


int main(){


    int value1, value2; 

    char letter;

    printf("Enter a character to be printed: ");
    scanf("%c",&letter);
    printf("Enter number of times number will be printed on line: ");
    scanf("%d", &value1);
    printf("Enter number of lines to be printed: ");
    scanf("%d", &value2);

    printf("\n");

    three_arguments(letter, value1, value2);



}

void three_arguments(char character, int value, int values1){

    for(int i = 0; i <= values1 - 1; i ++){
        
        for(int j = 0; j <= value - 1; j++){
            printf("%c", character);
        }
        printf("\n");
    }
    printf("\n");

}