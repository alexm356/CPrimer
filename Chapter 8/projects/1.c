#include <stdio.h>

int main(){


    char ch; 

    int charCount = 0;

    while((ch = getchar()) != EOF)
    {
        if (ch == 26){
            --charCount;
        }
        else{
            charCount++;
        }
    }

    printf("Characters in input up to EOF: %d", charCount);
        


}