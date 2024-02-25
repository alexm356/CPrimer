#include <stdio.h>

int main(){

    char response;

    int guess;

while ((response = getchar()) != 'y') /* get response */
{
 if (response == 'n')
 printf("Well, then, is it %d?\n", ++guess);
 else
 printf("Sorry, I understand only y or n.\n");
 while (getchar() != '\n')
 continue; /* skip rest of input line */
}

}

int get_int(void)
{
    int input;
    char ch;
    //outer loop keeps going until user enters int, causing scanf to return 1.
    while (scanf("%d", &input) != 1) // read int into input, if not int, enter outer while
    {
        //inner while reads inputs character by character
        while ((ch = getchar()) != '\n')
            putchar(ch); // dispose of bad input
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }
    return input;
}
