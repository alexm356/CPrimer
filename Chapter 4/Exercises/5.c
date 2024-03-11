#include <stdio.h>
#include <string.h>

int main(){

    char firstName[10];
    char lastName[20];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("%4s %9s\n", firstName, lastName);
    printf("%4d %9d",strlen(firstName), strlen(lastName));
    
}