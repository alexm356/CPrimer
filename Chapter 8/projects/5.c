/*

: Modify the guessing program of Listing 8.4 so that it uses a more intelligent
guessing strategy. For example, have the program initially guess 50, and have it
ask the user whether the guess is high, low, or correct. If, say, the guess is low,
have the next guess be halfway between 50 and 100, that is, 75. If that guess is
high, let the next guess be halfway between 75 and 50, and so on. Using this
binary search strategy, the program quickly zeros in on the correct answer, at
least if the user does not cheat.


*/

#include <stdio.h>

int main(){

    char response;

    int userNumber;

    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");

    printf("Enter your number: ");
    scanf("%d", &userNumber);

    printf("Is your number 50?\n");

    while ((response = getchar()) != 'y') /* get response */
    {
        if (response == 'n'){
            
            printf("Is number higher or lower than 50?");
        
            if(response == 'low'){

                printf("Is your number 25?");

            else if (response == 'high'){

            }



        }

        else
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n')
            continue; /* skip rest of input line */
    }

    return 0;
}