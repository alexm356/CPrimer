/*

Modify the get_first() function of Listing 8.8 so that it returns the first nonwhitespace character encountered. Test it in a simple program.

*/

#include <stdio.h>
#include <ctype.h>

char get_first(void);



int main(){


    char ch;

    ch = get_first();

    putchar(ch);

    return 0;


}

char get_first(void)
{
    char ch;

    while ((ch = getchar()) != '\n'){

        if (isspace(ch) == 1){
            printf("Space entered");
            break;
        }
        else {
            
        }


    }
    return ch;
}