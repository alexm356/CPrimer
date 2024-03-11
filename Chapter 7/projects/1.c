/*
Write a program that reads input until encountering the # character and then
reports the number of spaces read, the number of newline characters read, and
the number of all other characters read.
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '#'

int main(){

    char c;
    

    int spaceCount = 0; //count spaces
    int newLinesCount = 0; //count newlines
    int characterCount = 0; //number of characters

    printf("Enter text (# to terminate): \n");
    while((c = getchar()) != STOP)
    {
      if (c != '\n' && c != STOP)
        characterCount++;
        
      if(c == '\n')
        newLinesCount++;

      if(isspace(c) && c != '\n')
        spaceCount++;
        
    }
    printf("characters = %d, spaces = %d, lines = %d, ", characterCount, spaceCount, newLinesCount);

    return 0;

}