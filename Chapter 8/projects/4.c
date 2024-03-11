/*

Write a program that reads input as a stream of characters until encountering
EOF. Have it report the average number of letters per word. Don't count
whitespace as being letters in a word. Actually, punctuation shouldn't be counted
either, but don't worry about that now. (If you do want to worry about it, consider
using the ispunct() function from the ctype.h family.)



*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h> // for bool, true, false

int main(){ 


    char ch;

    char prev;

    int letterCount = 0;

    int n_chars = 0;

    int n_words = 0; // number of words

    int n_lines = 0;

    bool inword = false; // == true if ch is in a word

    int p_lines = 0;

    //dont count whitespace as word
    printf("Enter text to be analyzed: \n");
    prev = '\n';
    while ((ch = getchar()) != EOF)
    {
        if (isspace(ch) == 0){
            n_chars++;
        } // count characters
        if (ch == '\n'){
            n_lines++; // count lines
        }
        if (!isspace(ch) && !inword){
        {
            inword = true; // starting a new word
            n_words++;     // count word
        }
        }
        if (isspace(ch) && inword){
            inword = false; // reached end of word
            prev = ch;
        }
                  // save character value
    }
    if (prev != '\n'){
        p_lines = 1;
    }

    printf("Average number of letters per word: %d", n_chars / n_words);
    }



