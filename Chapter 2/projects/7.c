#include <stdio.h>

/* write a program that calls a function named : one_three()*/

void one_three(void);

void two(void);

int main(){


    printf("starting now: \n");
    one_three();
    two();

    printf("done!");
}

void one_three(void){

    printf("One\n");


}

void two(void){

    printf("two\n");

}