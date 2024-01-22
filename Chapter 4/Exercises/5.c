#include <stdio.h>
#include <string.h>

int main(){

    char firstName[10];
    char lastName[20];

    printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("%s %s\n", firstName, lastName);
    printf("%d %d",strlen(firstName), strlen(lastName));
    
}