#include <stdio.h>

void get_choice();

int limts(int lower, int upper);

int main(){

    int choices;
    int test;

    print("Enter an int to test: ");
    scanf("%d", &test);

    while (choices){

        get_choice();

    }


}

void get_choice(){

    int choice;

    printf("Please choose one of the following: ");
    printf("1) Copy files       2) move files");
    printf("3) remove files     4) quit");
    print("Enter the number of your choice: ");
    scanf("%d", &choice);

}

int limts(int lower, int upper){

    int low = 100,  high = 200;

    if (lower > )


}