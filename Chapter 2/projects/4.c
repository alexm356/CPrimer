#include <stdio.h>

void message(void);

void second_message(void);

int main(){

    printf("For he's a jolly good fellow!\n");
    printf("For he's a jolly good fellow!\n");
    message();
    second_message();

    return 0;

}

void message(void){

    printf("For he's a jolly good fellow!\n");

}

void second_message(void){

    printf("Which nobody can deny!");

}