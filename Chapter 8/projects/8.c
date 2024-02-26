#include <stdio.h>

double getInput(void);

char get_choice(void);
char get_letter(void);

void add();
void subtract();
void multiply();
void divide();

int main(){ 

    int choice;

    while ((choice = get_choice()) != 'q')
    {
        switch(choice)
        {
        case 'a':
            add();
            break;
        case 's':
            subtract();
            break;
        case 'm':
            multiply();
            break;
        case 'd':
            divide();
            break;
        default:
            printf("Incorrect input!");
            break;
        }
}
}

double getInput(void){

    double input;
    char ch;
    while (scanf("%lf", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); // dispose of bad input
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value, such as 25, -178, or 3: ");
    }
    return input;
    

}

char get_choice(void){

    int ch;

    printf("Enter the letter of your choice:\n");
    printf("a. add s. subtract\n");
    printf("m. multiply d. multiply\n");
    printf("q. quit\n");

    ch = get_letter();

    while (ch != 'q'){
        if (ch == 'a' || ch =='s' || ch == 'm' || ch == 'd')
        {
            return ch;
        }
        else {
            printf("Please respond with a, s, m, or d.\n");
            ch = get_letter();
        }
    }

}

char get_letter(void){
    int ch;
    ch = getchar();
    while (getchar() != '\n')
        continue;
    return ch;
}

void add(){

    double first, second;

    printf("Enter first number: ");
        first = getInput();
    printf("Enter second number: ");
        second = getInput();
    printf("%.2lf + %.2lf = %.2lf\n", first, second, first + second);

}

void subtract(){

    double first, second;

    printf("Enter first number: ");
        first = getInput();
    printf("Enter second number: ");
        second = getInput();
    printf("%.2lf - %.2lf = %.2lf\n", first, second, first - second);

}

void multiply(){

    double first, second;

    printf("Enter first number: ");
        first = getInput();
    printf("Enter second number: ");
        second = getInput();
    printf("%.2lf * %.2lf = %.2lf\n", first, second, first * second);

}

void divide(){


    double first, second;

    printf("Enter first number: ");
        first = getInput();
    printf("Enter second number: ");
        second = getInput();
    printf("%.2lf / %.2lf = %.2lf\n", first, second, first / second);
}