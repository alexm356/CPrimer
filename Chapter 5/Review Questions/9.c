//If the following fragments were part of a complete program, what would theyprint ? 

#include <stdio.h>

int main(){

char ch = 's';
while (ch < 'w')
{
    printf("%c", ch);
    ch++;
    
}
printf("%c\n", ch);


}


/*
//b
int x = 100;
while (x++ < 103)
    jprintf("%4d\n", x);
printf("%4d\n", x);

100 101 102 103

//c
char ch = 's';
while (ch < 'w')
{
    printf("%c", ch);
    ch++;
    
}
printf("%c\n", ch);

*/