/*


Write a program that reads input as a stream of characters until encountering
EOF. Have it report the number of uppercase letters and the number of lowercase
letters in the input. You may assume that the numeric values for the lowercase
letters are sequential and assume the same for uppercase. Or, more portably, you
can use appropriate classification functions from the ctype.h library.



*/

#include <stdio.h>
#include <ctype.h>

int main(){ 

    int upperCount = 0;

    int lowerCount = 0;

    char ch;

    //isalpha()

    while((ch = getchar()) != EOF)
    {
        if (isalpha(ch) == 1){

            if (toupper(ch) == ch){
                ++upperCount;
            }
            else{
                continue;
            }
        }
        else if (isalpha(ch) == 2){

            if (ch == tolower(ch)){
                ++lowerCount;

            }
        }

        else {
            continue;
        }
    }

    printf("Uppercase chars: %d, lowercase chars: %d", upperCount, lowerCount);


}